void __fastcall CScanPipeline::ResetPipeline(CScanPipeline *this)
{
  *((_DWORD *)this + 8) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 8, 0x30u);
  *((_DWORD *)this + 140) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 536, 8u);
  *((_DWORD *)this + 154) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 592, 8u);
}
