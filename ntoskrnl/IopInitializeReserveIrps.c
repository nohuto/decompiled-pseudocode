/*
 * XREFs of IopInitializeReserveIrps @ 0x140B6AAE8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402B18A4 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140C5D7C0 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2, 0LL);
  if ( IopReserveIrps )
  {
    dword_140C5D6E8 = 0;
    qword_140C5D700 = (__int64)&qword_140C5D6F8;
    LOBYTE(v2) = 42;
    qword_140C5D6F8 = (__int64)&qword_140C5D6F8;
    word_140C5D6F0 = 1;
    byte_140C5D6F2 = 6;
    dword_140C5D6F4 = 0;
    qword_140C5D708 = (PIRP)IopAllocateIrpWithExtension(v3, v2, 0LL);
    if ( qword_140C5D708 )
    {
      dword_140C5D710 = 0;
      qword_140C5D728 = (__int64)&qword_140C5D720;
      LOBYTE(v4) = 42;
      qword_140C5D720 = (__int64)&qword_140C5D720;
      word_140C5D718 = 1;
      byte_140C5D71A = 6;
      dword_140C5D71C = 0;
      qword_140C5D730 = (PIRP)IopAllocateIrpWithExtension(v5, v4, 0LL);
      if ( qword_140C5D730 )
      {
        dword_140C5D738 = 0;
        stru_140C5D740.Header.WaitListHead.Blink = &stru_140C5D740.Header.WaitListHead;
        v8 = 0;
        stru_140C5D740.Header.WaitListHead.Flink = &stru_140C5D740.Header.WaitListHead;
        LOWORD(stru_140C5D740.Header.Lock) = 1;
        stru_140C5D740.Header.Size = 6;
        stru_140C5D740.Header.SignalState = 0;
        qword_140C5D7B8 = 0LL;
        while ( 1 )
        {
          LOBYTE(v6) = 42;
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v7, v6, 0LL);
          v7 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            return 0;
          if ( !v8 )
            break;
          if ( v8 == 1 )
          {
            qword_140C5D788 = IrpWithExtension;
LABEL_11:
            ++v8;
          }
          else
          {
            ++v8;
            *(_QWORD *)&IrpWithExtension->Type = qword_140C5D7B8;
            qword_140C5D7B8 = IrpWithExtension;
            if ( v8 >= 8 )
            {
              dword_140C5D760 = 0;
              qword_140C5D780 = (__int64)&qword_140C5D778;
              result = 1;
              qword_140C5D778 = (__int64)&qword_140C5D778;
              stru_140C5D7A0.Header.WaitListHead.Blink = &stru_140C5D7A0.Header.WaitListHead;
              stru_140C5D7A0.Header.WaitListHead.Flink = &stru_140C5D7A0.Header.WaitListHead;
              dword_140C5D790 = 0;
              qword_140C5D768 = 0LL;
              qword_140C5D798 = 0LL;
              word_140C5D770 = 1;
              byte_140C5D772 = 6;
              dword_140C5D774 = 0;
              LOWORD(stru_140C5D7A0.Header.Lock) = 1;
              stru_140C5D7A0.Header.Size = 6;
              stru_140C5D7A0.Header.SignalState = 0;
              return result;
            }
          }
        }
        Irp = IrpWithExtension;
        goto LABEL_11;
      }
    }
  }
  return 0;
}
