void __fastcall PanAddD3DDirtyRgn(_QWORD *a1, const struct tagRECT *const a2)
{
  void (__fastcall *v2)(_QWORD, const struct tagRECT *const); // rax

  v2 = (void (__fastcall *)(_QWORD, const struct tagRECT *const))a1[204];
  if ( v2 )
    v2(a1[4], a2);
}
