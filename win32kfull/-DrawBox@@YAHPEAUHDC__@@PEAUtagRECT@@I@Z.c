__int64 __fastcall DrawBox(HDC a1, struct tagRECT *a2, __int16 a3)
{
  const wchar_t *v3; // r14
  int v5; // r15d
  int v8; // eax
  unsigned int v9; // ebx
  const wchar_t *v10; // rax
  LONG top; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  int v15; // r12d
  unsigned int v16; // r13d
  const unsigned __int16 *v17; // r14
  __int64 i; // r15
  unsigned __int16 *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  HBRUSH *v26; // r8
  int v27; // ebx
  int v28; // [rsp+20h] [rbp-A9h]
  unsigned int v29; // [rsp+60h] [rbp-69h]
  int v30; // [rsp+64h] [rbp-65h]
  int v31; // [rsp+68h] [rbp-61h]
  _DWORD v32[4]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v33; // [rsp+80h] [rbp-49h]
  _BYTE v34[48]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v35; // [rsp+D0h] [rbp+7h]
  __int64 v36; // [rsp+D4h] [rbp+Bh]
  __int64 v37; // [rsp+DCh] [rbp+13h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v26 = (HBRUSH *)ghbrWhite;
    v9 = 0;
    v37 = 0LL;
    v36 = 0LL;
    v35 = 0;
    goto LABEL_22;
  }
  if ( (a3 & 0xC000) != 0 )
  {
    v8 = *(_DWORD *)(gpsi + 4592LL);
    LODWORD(v37) = v8;
    HIDWORD(v36) = v8;
    LODWORD(v36) = v8;
  }
  else
  {
    LODWORD(v36) = *(_DWORD *)(gpsi + 4656LL);
    HIDWORD(v36) = *(_DWORD *)(gpsi + 4652LL);
    LODWORD(v37) = *(_DWORD *)(gpsi + 4648LL);
    v8 = *(_DWORD *)(gpsi + 4632LL);
  }
  HIDWORD(v37) = v8;
  if ( (a3 & 0x300) != 0 )
  {
    v9 = *(_DWORD *)(gpsi + 4628LL);
  }
  else if ( v5 == 1032 )
  {
    v9 = *(_DWORD *)(gpsi + 4648LL);
  }
  else
  {
    v9 = *(_DWORD *)(gpsi + 4588LL);
  }
  v35 = v9;
  if ( (a3 & 1) != 0 )
  {
    v26 = (HBRUSH *)ghbrBlack;
LABEL_22:
    FillRect(a1, a2, *v26);
    goto LABEL_10;
  }
  v10 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v10 = L"nmlkji";
  v3 = v10;
LABEL_10:
  top = a2->top;
  v12 = a2->bottom - top;
  v13 = a2->right - a2->left;
  v31 = v12;
  v30 = v13;
  v14 = v13;
  if ( v13 >= v12 )
    v14 = a2->bottom - top;
  v15 = a2->left + (v13 - v14) / 2;
  v16 = top + (v12 - v14) / 2;
  if ( v5 == 1032 && (*(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF) )
  {
    v27 = GreSetBkColor(a1, *(_DWORD *)(gpsi + 4648LL));
    v29 = GreSetTextColor((__int64)a1, *(unsigned int *)(gpsi + 4628LL));
    v32[2] = v30;
    v32[3] = v31;
    v32[0] = v15;
    v32[1] = v16;
    v33 = *(_QWORD *)(gpsi + 4944LL);
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v32, 1u, v28);
    GreSetBkColor(a1, v27);
  }
  else
  {
    v29 = GreSetTextColor((__int64)a1, v9);
    GreExtTextOutW((__int64)a1, v15, v16, 0, 0LL, (__int64)v3, 1);
  }
  v17 = v3 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor((__int64)a1, *(&v35 + i));
    v19 = (unsigned __int16 *)v17++;
    v21 = SGDGetSessionState(v20);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v34, *(struct Gre::Full::SESSION_GLOBALS **)(v21 + 32));
    v23 = SGDGetSessionState(v22);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v32, *(struct Gre::Full::SESSION_GLOBALS **)(v23 + 32));
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v19, 1, 0LL, 0LL, 0, 1025);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v32);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v34);
  }
  if ( (a3 & 0x400) != 0 )
  {
    if ( (a3 & 0x108) != 0 )
    {
      v24 = *(unsigned int *)(gpsi + 4632LL);
    }
    else if ( (a3 & 0x1000) != 0 )
    {
      v24 = *(unsigned int *)(gpsi + 4672LL);
    }
    else
    {
      v24 = *(unsigned int *)(gpsi + 4600LL);
    }
    GreSetTextColor((__int64)a1, v24);
    FlipUserTextOutW(a1, v15, v16, v17);
  }
  GreSetTextColor((__int64)a1, v29);
  return 1LL;
}
