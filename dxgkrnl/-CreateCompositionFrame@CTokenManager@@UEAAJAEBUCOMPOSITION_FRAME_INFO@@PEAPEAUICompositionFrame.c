__int64 __fastcall CTokenManager::CreateCompositionFrame(
        CTokenManager *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        struct ICompositionFrame **a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int64 result; // rax

  v6 = operator new[](0xD0uLL, 0x66634D54u, 256LL);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  *(_DWORD *)(v6 + 8) = 1;
  *(_QWORD *)v6 = &CCompositionFrame::`vftable';
  *(_OWORD *)(v6 + 32) = *(_OWORD *)a2;
  *(_OWORD *)(v6 + 48) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(v6 + 64) = *((_OWORD *)a2 + 2);
  *(_QWORD *)(v6 + 80) = *((_QWORD *)a2 + 6);
  v8 = *((_QWORD *)this + 2);
  v9 = v8 == -1;
  v10 = v8 + 1;
  *((_QWORD *)this + 2) = v10;
  if ( v9 )
  {
    *((_QWORD *)this + 2) = 1LL;
    v10 = 1LL;
  }
  *(_QWORD *)(v7 + 88) = v10;
  *(_DWORD *)(v7 + 96) = 0;
  *(_QWORD *)(v7 + 160) = v7 + 152;
  *(_QWORD *)(v7 + 152) = v7 + 152;
  *(_QWORD *)(v7 + 176) = v7 + 168;
  *(_QWORD *)(v7 + 168) = v7 + 168;
  *(_QWORD *)(v7 + 192) = v7 + 184;
  *(_QWORD *)(v7 + 184) = v7 + 184;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 112) = 0LL;
  *(_BYTE *)(v7 + 120) = 0;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_QWORD *)(v7 + 136) = 0LL;
  *(_WORD *)(v7 + 144) = 0;
  *(_BYTE *)(v7 + 146) = 0;
  *(_QWORD *)(v7 + 200) = this;
  (**(void (__fastcall ***)(CTokenManager *))this)(this);
  result = 0LL;
  *a3 = (struct ICompositionFrame *)v7;
  return result;
}
