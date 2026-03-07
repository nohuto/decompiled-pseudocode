void __fastcall CRenderTargetBitmap::SetDisplayId(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL) + *(_QWORD *)(a1 + 16) + 8LL;
  if ( a2 != *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 8LL))(v4, &v5) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)(a1 - 120));
  }
}
