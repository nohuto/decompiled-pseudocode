void __fastcall CD3DDevice::UpdateSubresource(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        const struct tagRECT *a3,
        const void *a4,
        unsigned int a5,
        bool a6)
{
  LONG left; // eax
  __int64 v7; // rcx
  _DWORD v8[6]; // [rsp+50h] [rbp-28h] BYREF

  left = a3->left;
  v7 = *((_QWORD *)this + 70);
  v8[2] = 0;
  v8[0] = left;
  v8[1] = a3->top;
  v8[3] = a3->right;
  v8[4] = a3->bottom;
  v8[5] = 1;
  (*(void (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _DWORD *, const void *, unsigned int, _DWORD, bool))(*(_QWORD *)v7 + 928LL))(
    v7,
    a2,
    0LL,
    v8,
    a4,
    a5,
    0,
    a6);
}
