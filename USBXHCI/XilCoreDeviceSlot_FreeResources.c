void __fastcall XilCoreDeviceSlot_FreeResources(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  void *v9; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v3 = *(_QWORD *)(v2 + 88);
  v4 = *(_QWORD *)(v2 + 120);
  v5 = *(_QWORD *)(v3 + 32);
  if ( *(_QWORD *)(a1 + 24) )
  {
    XilRegister_WriteUlong(v3, (_DWORD *)(v5 + 56), 0);
    XilRegister_WriteUlong64(v3, (_DWORD *)(v5 + 48), 0LL);
    CommonBuffer_ReleaseBuffer(v4, *(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    CommonBuffer_ReleaseBuffer(v4, v6);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v7 = (_QWORD *)(a1 + 40);
  v8 = *(_QWORD **)(a1 + 40);
  if ( (v8 || *(_QWORD *)(a1 + 48)) && v8 != v7 )
  {
    XilCoreCommonBuffer_ReleaseBuffers(v4 + 88, (_QWORD **)(a1 + 40));
    *(_QWORD *)(a1 + 48) = a1 + 40;
    *v7 = v7;
  }
  v9 = *(void **)(a1 + 56);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x49434858u);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
