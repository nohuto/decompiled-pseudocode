char __fastcall DirectComposition::CBatchDeferralMarshaler::EmitUpdateCommands(
        DirectComposition::CBatchDeferralMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rdx

  v2 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = *((_QWORD *)*a2 + 1);
    *v2 = *(_QWORD *)(v3 + 208);
    *(_QWORD *)(v3 + 208) = v2;
    *((_QWORD *)this + 7) = 0LL;
  }
  return 1;
}
