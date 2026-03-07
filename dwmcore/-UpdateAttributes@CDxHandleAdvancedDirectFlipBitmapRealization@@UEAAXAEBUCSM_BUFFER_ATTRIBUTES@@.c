void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::UpdateAttributes(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  int v3; // edi
  char *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  char *v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, _QWORD); // rbx
  char *v12; // rcx
  unsigned int *v13; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v3 = *((_DWORD *)this - 54);
  v5 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
  (*(void (__fastcall **)(char *, int *))(*(_QWORD *)v5 + 16LL))(v5, &v14);
  CDxHandleBitmapRealization::UpdateAttributes(this, a2);
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    if ( v3 != *((_DWORD *)this - 54) )
    {
      v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 24LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    }
    v8 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v8 + 16LL))(v8, &v15);
    if ( v14 != *v9 )
    {
      v10 = *((_QWORD *)this + 7) + *(int *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 24LL);
      v11 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v10 + 8) + 32LL);
      v12 = (char *)this + *(int *)(*((_QWORD *)this - 43) + 16LL) - 344;
      v13 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v12 + 16LL))(v12, &v15);
      v11(v10 + 8, *v13);
    }
  }
}
