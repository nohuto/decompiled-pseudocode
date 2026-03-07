__int64 __fastcall DrawGrip(HDC a1, struct tagRECT *a2, __int16 a3)
{
  LONG bottom; // ebp
  LONG top; // r8d
  LONG right; // esi
  int v7; // r9d
  LONG left; // r10d
  int v10; // edx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // r14d
  unsigned int v17; // edi
  int v19; // [rsp+20h] [rbp-58h]
  _DWORD v20[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  bottom = a2->bottom;
  top = a2->top;
  right = a2->right;
  v7 = bottom - top;
  left = a2->left;
  v10 = right - a2->left;
  v11 = v10;
  if ( v10 >= bottom - top )
    v11 = bottom - top;
  v12 = right - v11;
  v13 = bottom - v11;
  if ( (a3 & 0xC000) != 0 )
  {
    v15 = *(_DWORD *)(gpsi + 4592LL);
    v16 = v15;
    v14 = *(_QWORD *)(gpsi + 4736LL);
  }
  else
  {
    v14 = *(_QWORD *)(gpsi + 4816LL);
    v15 = *(_DWORD *)(gpsi + 4648LL);
    v16 = *(_DWORD *)(gpsi + 4632LL);
  }
  v20[1] = top;
  v20[2] = v10;
  v20[3] = v7;
  v20[0] = left;
  v21 = v14;
  GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v20, 1u, v19);
  v17 = GreSetTextColor(a1, v15);
  if ( (a3 & 0x10) != 0 )
  {
    GreExtTextOutW((_DWORD)a1, v12, v13, 0, 0LL, (__int64)L"x", 1);
    GreSetTextColor(a1, v16);
    GreExtTextOutW((_DWORD)a1, v12, v13, 0, 0LL, (__int64)L"y", 1);
  }
  else
  {
    GreExtTextOutW((_DWORD)a1, v12, v13, 0, 0LL, (__int64)L"o", 1);
    GreSetTextColor(a1, v16);
    GreExtTextOutW((_DWORD)a1, v12, v13, 0, 0LL, (__int64)L"p", 1);
  }
  GreSetTextColor(a1, v17);
  return 1LL;
}
