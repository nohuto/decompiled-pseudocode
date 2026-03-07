__int64 __fastcall CViewBox::NotifyCurrentPropertyValues(CViewBox *this, int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 4LL;
  v3[1] = &CViewBox::k_rgAnimDef;
  return CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(this, a2, v3);
}
