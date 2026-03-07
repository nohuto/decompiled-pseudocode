__int64 __fastcall DmmAdapterPowerChange(PERESOURCE *a1, char a2)
{
  PERESOURCE v3; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *v6; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 != 1 )
    return 0LL;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
      WdLogSingleEntry0(1LL);
    v3 = a1[365];
    if ( !v3 )
      return 0LL;
    Flink = v3[1].SystemResourcesList.Flink;
    if ( Flink )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v9, (__int64)v3[1].SystemResourcesList.Flink);
      _InterlockedIncrement((volatile signed __int32 *)&Flink[7].Blink[4].Blink);
      Blink = Flink[7].Blink;
      v6 = Blink[1].Blink;
      if ( v6 != (struct _LIST_ENTRY *)&Blink[1].Blink )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)&v6[-1].Blink;
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)Blink, i) )
        {
          *((_BYTE *)i + 396) = 0;
        }
      }
      if ( Blink )
        ReferenceCounted::Release((ReferenceCounted *)&Blink[4]);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 40));
      return 0LL;
    }
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
}
