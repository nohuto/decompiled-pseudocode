/*
 * XREFs of NVMeHardwareReset @ 0x1C000F26C
 * Callers:
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C690 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     IsNVMeResetComplete @ 0x1C000C0A0 (IsNVMeResetComplete.c)
 */

__int64 NVMeHardwareReset(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  __int64 v3; // r9
  unsigned int v6; // ebp
  unsigned int v7; // edi
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = v9;
  LOBYTE(v9) = 0;
  if ( (unsigned int)StorPortExtendedFunction(109LL, a1, (__int64 *)va, v3) || (_BYTE)v9 )
  {
    v7 = -1056964600;
    goto LABEL_14;
  }
  v6 = StorPortExtendedFunction(114LL, a1, a2, 0LL);
  if ( !IsNVMeResetComplete(a1) )
  {
    v7 = -1056964607;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    goto LABEL_14;
  }
  v7 = v6;
  if ( v6 )
  {
LABEL_14:
    if ( a2 )
    {
      if ( a2 == 2 )
      {
        ++*(_DWORD *)(a1 + 4444);
        *(_DWORD *)(a1 + 36) = 28;
      }
      else if ( a2 == 1 )
      {
        ++*(_DWORD *)(a1 + 4452);
        *(_DWORD *)(a1 + 36) = 29;
      }
    }
    else
    {
      ++*(_DWORD *)(a1 + 4436);
      *(_DWORD *)(a1 + 36) = 25;
    }
    return v7;
  }
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      ++*(_DWORD *)(a1 + 4440);
    }
    else if ( a2 == 1 )
    {
      ++*(_DWORD *)(a1 + 4448);
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 4432);
  }
  return v7;
}
