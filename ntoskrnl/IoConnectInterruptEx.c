/*
 * XREFs of IoConnectInterruptEx @ 0x1406F4AE0
 * Callers:
 *     HalpInterruptConnect @ 0x1405021F0 (HalpInterruptConnect.c)
 *     DifIoConnectInterruptExWrapper @ 0x1405DB7F0 (DifIoConnectInterruptExWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x1406F5728 (IopGetInterruptConnectionData.c)
 *     IopConnectMessageBasedInterrupt @ 0x1408502F8 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x140853C50 (IopConnectLineBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x140857BF0 (IopConnectInterruptFullySpecified.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  __int64 Version; // rcx
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v5; // di
  USHORT Group; // si
  unsigned int v7; // edx
  KIRQL v8; // al
  __int128 v9; // xmm0
  __m128i v10; // xmm2
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  NTSTATUS v14; // esi
  NTSTATUS result; // eax
  PVOID ServiceContext; // r9
  PKSERVICE_ROUTINE ServiceRoutine; // r8
  PDEVICE_OBJECT PhysicalDeviceObject; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  PKSPIN_LOCK SpinLock; // [rsp+20h] [rbp-69h]
  ULONG Vector; // [rsp+28h] [rbp-61h]
  KIRQL v23; // [rsp+30h] [rbp-59h]
  KIRQL v24; // [rsp+38h] [rbp-51h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-49h]
  __int64 v26; // [rsp+48h] [rbp-41h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-41h]
  __int128 ProcessorEnableMask; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v29[14]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v30; // [rsp+100h] [rbp+77h] BYREF

  v30 = 0LL;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  if ( (_DWORD)Version == 1 )
    goto LABEL_6;
  if ( (_DWORD)Version == 2 )
    return IopConnectLineBasedInterrupt(
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             (__int64)Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( (_DWORD)Version != 3 )
  {
    if ( (_DWORD)Version == 4 )
    {
LABEL_6:
      if ( !Parameters->FullySpecified.PhysicalDeviceObject )
        return -1073741811;
      if ( !Parameters->FullySpecified.ServiceRoutine )
        return -1073741811;
      SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
      Irql = Parameters->FullySpecified.Irql;
      if ( SynchronizeIrql < Irql )
        return -1073741811;
      if ( SynchronizeIrql || Irql )
      {
        v5 = 0;
      }
      else
      {
        v5 = 1;
        if ( Parameters->FullySpecified.SpinLock )
          return -1073741811;
      }
      if ( (_DWORD)Version == 4 )
        Group = Parameters->FullySpecified.Group;
      else
        Group = 0;
      if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
      {
        memset((char *)v29 + 4, 0, 0x5CuLL);
        v7 = 0;
        LODWORD(v29[0]) = 0;
        if ( MEMORY[0] )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(88LL * v7 + 0xC) == Parameters->FullySpecified.Vector )
            {
              v8 = Parameters->FullySpecified.Irql;
              if ( (*(_BYTE *)(88LL * v7 + 0x10) == v8 || !v8)
                && *(_DWORD *)(88LL * v7 + 0x18) == Parameters->FullySpecified.InterruptMode
                && *(_WORD *)(88LL * v7 + 0x28) == Group
                && *(_QWORD *)(88LL * v7 + 0x20) == Parameters->FullySpecified.ProcessorEnableMask )
              {
                break;
              }
            }
            if ( ++v7 >= MEMORY[0] )
              goto LABEL_44;
          }
          v9 = *(_OWORD *)(88LL * v7 + 0x18);
          LODWORD(v29[0]) = 1;
          v10 = *(__m128i *)(88LL * v7 + 8);
          v11 = *(_OWORD *)(88LL * v7 + 0x28);
          *(_OWORD *)&v29[3] = v9;
          v12 = *(_OWORD *)(88LL * v7 + 0x38);
          *(_OWORD *)&v29[5] = v11;
          v13 = *(_OWORD *)(88LL * v7 + 0x48);
          *(_OWORD *)&v29[7] = v12;
          v29[11] = *(_QWORD *)(88LL * v7 + 0x58);
          *(__m128i *)&v29[1] = v10;
          *(_OWORD *)&v29[9] = v13;
          if ( !_mm_cvtsi128_si32(v10) && (v29[8] & 0x100000000LL) != 0 )
            Parameters->FullySpecified.ShareVector = 1;
          v14 = IopConnectInterrupt(
                  &v30,
                  (ULONG_PTR)Parameters->FullySpecified.PhysicalDeviceObject,
                  (__int64 (__fastcall *)())Parameters->FullySpecified.ServiceRoutine,
                  0LL,
                  (__int64)Parameters->FullySpecified.ServiceContext,
                  0,
                  (__int64)Parameters->FullySpecified.SpinLock,
                  Parameters->FullySpecified.SynchronizeIrql,
                  Parameters->FullySpecified.ShareVector,
                  v26,
                  (__int64)v29);
          if ( v14 >= 0 )
            *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)(v30 + 112);
          ExFreePoolWithTag(0LL, 0);
          return v14;
        }
LABEL_44:
        ExFreePoolWithTag(0LL, 0);
        return -1073741637;
      }
      if ( v5 )
        return -1073741637;
      ServiceContext = Parameters->FullySpecified.ServiceContext;
      ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
      PhysicalDeviceObject = Parameters->FullySpecified.PhysicalDeviceObject;
      InterruptObject = Parameters->FullySpecified.InterruptObject;
      ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
      ShareVector = Parameters->FullySpecified.ShareVector;
      InterruptMode = Parameters->FullySpecified.InterruptMode;
      v24 = Parameters->FullySpecified.SynchronizeIrql;
      v23 = Parameters->FullySpecified.Irql;
      Vector = Parameters->FullySpecified.Vector;
      SpinLock = Parameters->FullySpecified.SpinLock;
      WORD4(ProcessorEnableMask) = Group;
      return IopConnectInterruptFullySpecified(
               (_DWORD)InterruptObject,
               (_DWORD)PhysicalDeviceObject,
               (_DWORD)ServiceRoutine,
               (_DWORD)ServiceContext,
               (__int64)SpinLock,
               Vector,
               v23,
               v24,
               InterruptMode,
               ShareVector,
               (__int64)&ProcessorEnableMask);
    }
    if ( (_DWORD)Version != 5 )
    {
      Parameters->Version = 3;
      return -1073741637;
    }
  }
  result = IopConnectMessageBasedInterrupt(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result < 0 )
  {
    if ( !Parameters->MessageBased.FallBackServiceRoutine )
      return -1073741637;
    v14 = IopConnectLineBasedInterrupt(
            Parameters->FullySpecified.PhysicalDeviceObject,
            Parameters->FullySpecified.InterruptObject,
            Parameters->MessageBased.FallBackServiceRoutine,
            Parameters->FullySpecified.ServiceContext,
            (__int64)Parameters->FullySpecified.SpinLock,
            Parameters->FullySpecified.SynchronizeIrql);
    Parameters->Version = 2;
    return v14;
  }
  return result;
}
