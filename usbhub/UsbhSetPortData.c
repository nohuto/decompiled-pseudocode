/*
 * XREFs of UsbhSetPortData @ 0x1C0057810
 * Callers:
 *     UsbhCreatePdo @ 0x1C0053530 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C00012A0 (UsbhRefPdo.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhSetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rbx
  struct _KEVENT *v10; // rax
  __int64 v11; // rcx

  Log(a1, 256, 1936745588, a2, a3);
  v6 = PdoExt(v5);
  Log(a1, 256, 1936745552, a2, *((unsigned __int16 *)v6 + 714));
  v7 = PdoExt(a2);
  result = UsbhGetPortData(a1, *((_WORD *)v7 + 714));
  v9 = result;
  if ( result )
  {
    v10 = (struct _KEVENT *)PdoExt(a2);
    KeResetEvent(v10 + 54);
    result = UsbhRefPdo(v11, a2, 0LL, 1279349827);
    *(_QWORD *)(v9 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 1);
      result = (__int64)PdoExt(result);
      *(_DWORD *)(result + 1424) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 0);
    }
  }
  return result;
}
