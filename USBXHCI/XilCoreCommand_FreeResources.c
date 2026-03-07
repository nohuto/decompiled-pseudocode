void __fastcall XilCoreCommand_FreeResources(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  XilRegister_WriteUlong64(*(_QWORD *)(v2 + 88), *(_DWORD **)(a1 + 8), 0LL);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120), v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
