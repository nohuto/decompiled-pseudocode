__int64 __fastcall CAdapter::Create(const struct CSM_TOKEN_ADAPTER_INFO *a1, int a2, struct CAdapter **a3)
{
  int v6; // edi
  __int64 v7; // rax
  CAdapter *v8; // rbx

  *a3 = 0LL;
  v6 = -1073741801;
  v7 = operator new[](0x68uLL, 0x63614D54u, 256LL);
  v8 = (CAdapter *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &CAdapter::`vftable';
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_DWORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 44) = 0;
    *(_QWORD *)(v7 + 48) = -1LL;
    *(_DWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_DWORD *)(v7 + 72) = 0;
    *(_QWORD *)(v7 + 80) = 0LL;
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_DWORD *)(v7 + 96) = a2;
    *(_DWORD *)(v7 + 100) = 1;
    v6 = CAdapter::Initialize((CAdapter *)v7, a1);
    if ( v6 < 0 )
      CAdapter::`scalar deleting destructor'(v8);
    else
      *a3 = v8;
  }
  return (unsigned int)v6;
}
