void __fastcall CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint(CSaveRestoreCheckPoint *this)
{
  _OWORD *v1; // rbx
  _QWORD *v2; // r9
  __int64 v3; // rax
  _OWORD *Prop; // rax

  v1 = (_OWORD *)((char *)this + 8);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 8)) )
  {
    v3 = HMValidateHandleNoSecure(*v2, 1);
    if ( v3 )
    {
      Prop = (_OWORD *)GetProp(v3, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
      if ( Prop )
        *Prop = *v1;
    }
  }
}
