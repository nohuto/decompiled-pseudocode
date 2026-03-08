/*
 * XREFs of MiUpdatePageThresholdsDpc @ 0x1403A9280
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiUpdateAvailableEvents @ 0x1403A9340 (MiUpdateAvailableEvents.c)
 */

__int64 __fastcall MiUpdatePageThresholdsDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // ebx
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v11 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v11);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v7;
    v8 = a2[2];
    *(_QWORD *)(v8 + 16152) = *a2;
    *(_QWORD *)(v8 + 16160) = a2[1];
    MiUpdateAvailableEvents(v8, a2, a3);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v10 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v10 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v10;
  }
  _InterlockedDecrement(a3);
  return result;
}
