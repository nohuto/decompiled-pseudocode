char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bp
  int v5; // edi
  struct DirectComposition::CBatch **v6; // rcx
  struct DirectComposition::CBatch *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r9
  _DWORD *v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  void *v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
  {
    v5 = 0;
    if ( *((_QWORD *)this + 16) )
    {
      if ( *((_QWORD *)this + 26) )
      {
        v6 = *a2;
        v16 = 0LL;
        v7 = v6[17];
        v8 = *((_QWORD *)v7 + 5);
        if ( (unsigned __int64)(4096 - v8) >= 0x4C
          && (v9 = *((_QWORD *)v7 + 7), *((_QWORD *)v7 + 5) = v8 + 76, (v10 = (_DWORD *)(v8 + v9)) != 0LL) )
        {
          v6[19] = (struct DirectComposition::CBatch *)((char *)v6[19] + 76);
        }
        else
        {
          if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
            return 0;
          if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x4CuLL, &v16) )
            KeBugCheck(0xC000000D);
          v10 = v16;
        }
        *v10 = 76;
        v11 = v10 + 1;
        memset(v10 + 1, 0, 0x48uLL);
        *v11 = 221;
        v11[1] = *((_DWORD *)this + 8);
        v11[2] = *((_DWORD *)this + 58);
        v11[3] = *(_DWORD *)(*((_QWORD *)this + 16) + 32LL);
        v11[4] = *((_DWORD *)this + 50);
        v11[5] = *((_DWORD *)this + 52);
        v11[6] = *((_DWORD *)this + 63);
        v11[7] = *((_DWORD *)this + 64);
        v11[8] = *((_DWORD *)this + 67);
        v11[16] = *((_DWORD *)this + 69);
        v11[9] = *((_DWORD *)this + 70);
        v11[10] = *((_DWORD *)this + 72);
        v12 = *((_QWORD *)this + 20);
        if ( v12 )
          v13 = *(_DWORD *)(v12 + 32);
        else
          v13 = 0;
        v11[11] = v13;
        v14 = *((_QWORD *)this + 17);
        if ( v14 )
          v5 = *(_DWORD *)(v14 + 32);
        v11[12] = v5;
        v11[13] = *((_DWORD *)this + 56);
        v11[14] = *((_DWORD *)this + 54);
        v11[15] = *((_BYTE *)this + 296) & 1;
        *((_BYTE *)v11 + 68) = (*((_BYTE *)this + 296) & 2) != 0;
        *((_BYTE *)this + 296) &= ~1u;
        *((_DWORD *)this + 4) |= 0x800u;
      }
    }
  }
  return v4;
}
