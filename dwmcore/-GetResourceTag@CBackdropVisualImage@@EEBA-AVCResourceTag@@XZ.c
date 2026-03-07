__int64 __fastcall CBackdropVisualImage::GetResourceTag(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = 25;
  *(_QWORD *)a2 = "DWM Backdrop Visual Image";
  return a2;
}
