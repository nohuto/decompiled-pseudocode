struct DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::CreateSharedResource(
        struct ADAPTER_RENDER *a1,
        struct DXGADAPTER *a2,
        char a3)
{
  struct DXGSHAREDRESOURCE *result; // rax
  struct DXGSHAREDRESOURCE *v7; // rdi
  DXGSHAREDRESOURCE *v8; // rax
  DXGSHAREDRESOURCE *v9; // rbx
  DXGSHAREDRESOURCE *v10; // rax

  result = (struct DXGSHAREDRESOURCE *)operator new[](0x18uLL, 0x4B677844u, 64LL);
  v7 = result;
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
    KeInitializeSpinLock((PKSPIN_LOCK)result + 2);
    if ( a3 )
    {
      v10 = (DXGSHAREDRESOURCE *)operator new[](0xF0uLL, 0x4B677844u, 256LL);
      v9 = v10;
      if ( v10 )
      {
        DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v10, a1, a2);
        *((_DWORD *)v9 + 52) = 0;
        *((_DWORD *)v9 + 53) = 0;
        *((_DWORD *)v9 + 54) = 0;
        *((_QWORD *)v9 + 28) = 0LL;
        *((_DWORD *)v9 + 3) |= 0x20u;
        *(_QWORD *)v9 = &DXGSHAREDRESOURCECA::`vftable';
        goto LABEL_6;
      }
      v9 = 0LL;
    }
    else
    {
      v8 = (DXGSHAREDRESOURCE *)operator new[](0xD0uLL, 0x4B677844u, 256LL);
      if ( !v8 )
      {
        v9 = 0LL;
        goto LABEL_13;
      }
      v9 = DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v8, a1, a2);
    }
    if ( v9 )
    {
LABEL_6:
      *((_QWORD *)v9 + 22) = v7;
      *(_QWORD *)v7 = v9;
      return v9;
    }
LABEL_13:
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v7);
    return v9;
  }
  return result;
}
