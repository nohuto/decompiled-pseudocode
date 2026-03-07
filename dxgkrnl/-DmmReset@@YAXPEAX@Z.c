void __fastcall DmmReset(DXGADAPTER *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v8, v2);
  v6 = (_QWORD *)(*(_QWORD *)(v2 + 120) + 24LL);
  if ( (_QWORD *)*v6 != v6 )
  {
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v6 - 8LL);
    if ( *v6 != 8LL )
    {
      do
      {
        DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(NextTarget, v3, v4, v5);
        *(_BYTE *)(*((_QWORD *)NextTarget + 67) + 168LL) = 13;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*(DMMVIDEOPRESENTTARGETSET **)(v2 + 120), NextTarget);
      }
      while ( NextTarget );
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 40));
}
