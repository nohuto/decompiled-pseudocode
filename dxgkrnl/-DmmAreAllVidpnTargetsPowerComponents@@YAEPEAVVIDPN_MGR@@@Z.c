char __fastcall DmmAreAllVidpnTargetsPowerComponents(struct VIDPN_MGR *a1)
{
  _QWORD *v2; // rbx
  char v3; // di
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  _QWORD *v5; // rcx
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v8, (__int64)a1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
  v2 = (_QWORD *)*((_QWORD *)a1 + 15);
  v3 = 0;
  NextTarget = 0LL;
  v7 = v2;
  v5 = (_QWORD *)v2[3];
  if ( v5 != v2 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v5 - 1);
  if ( NextTarget )
  {
    while ( *((_DWORD *)NextTarget + 100) != -1 )
    {
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v2, NextTarget);
      if ( !NextTarget )
        goto LABEL_6;
    }
    auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>((__int64 *)&v7);
  }
  else
  {
LABEL_6:
    if ( v2 )
      ReferenceCounted::Release((ReferenceCounted *)(v2 + 8));
    v3 = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 40));
  return v3;
}
