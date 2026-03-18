/*
 * XREFs of NtDCompositionGetFrameIdFromBatchId @ 0x1C0211C80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameIdFromBatchId(unsigned int a1, int a2, _QWORD *a3)
{
  __int64 v5; // rsi
  int v6; // ebx
  _QWORD *v7; // rdx
  __int128 v9; // [rsp+28h] [rbp-40h]
  struct DirectComposition::CApplicationChannel *v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0LL;
  v5 = 0LL;
  if ( a3 )
  {
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v10);
    if ( v6 >= 0 )
    {
      v9 = *((_OWORD *)v10 + (a2 & 0x3F) + 33);
      do
      {
        while ( (_DWORD)v9 != *((_DWORD *)v10 + 4 * (a2 & 0x3F) + 132) )
          ;
      }
      while ( *((_QWORD *)&v9 + 1) != *((_QWORD *)v10 + 2 * (a2 & 0x3F) + 67) );
      v5 = 0LL;
      if ( (_DWORD)v9 == a2 )
        v5 = *((_QWORD *)v10 + 2 * (a2 & 0x3F) + 67);
      if ( !v5 )
        v6 = -1073741275;
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v10)(v10);
    }
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741275 )
      *a3 = v5;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
