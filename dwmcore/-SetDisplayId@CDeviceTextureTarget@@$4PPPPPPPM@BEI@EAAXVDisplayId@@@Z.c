void __fastcall CDeviceTextureTarget::SetDisplayId(__int64 a1, int a2)
{
  CD2DBitmap::SetDisplayId(a1 - *(int *)(a1 - 4) - 328, a2);
}
