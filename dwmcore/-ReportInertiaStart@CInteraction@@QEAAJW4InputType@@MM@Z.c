__int64 __fastcall CInteraction::ReportInertiaStart(__int64 a1, int a2, float a3, float a4)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // rax
  float *v9; // rdi
  signed int LastError; // eax
  float *v12; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 1728);
  v6 = 0;
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 224LL))(v5, *((_QWORD *)g_pComposition + 62));
  v8 = *(_QWORD *)(a1 + 112);
  v9 = 0LL;
  if ( v8 )
    v9 = *(float **)(v8 + 16);
  v12 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(float *))(*(_QWORD *)v9 + 8LL))(v9);
    if ( !(unsigned int)ReportInertiaStartHelper(
                          *(unsigned int *)(a1 + 1704),
                          a2,
                          a3,
                          a4,
                          v9 + 43,
                          (_DWORD *)(a1 + 288)) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      else
        v6 = LastError;
    }
    (*(void (__fastcall **)(float *))(*(_QWORD *)v9 + 16LL))(v9);
    return v6;
  }
  else
  {
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>((__int64 *)&v12);
    return 0LL;
  }
}
