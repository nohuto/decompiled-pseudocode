/*
 * XREFs of ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0125B18
 * Callers:
 *     DrawFrameControl @ 0x1C0045C38 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GrePolyPatBlt @ 0x1C0045794 (GrePolyPatBlt.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 */

__int64 __fastcall DrawGrip(HDC a1, struct tagRECT *a2, __int16 a3)
{
  LONG bottom; // esi
  LONG top; // r8d
  LONG right; // edi
  int v7; // r9d
  LONG left; // r10d
  int v10; // edx
  int v11; // eax
  LONG v12; // edi
  LONG v13; // esi
  __int64 v14; // rax
  int v15; // ebx
  int v16; // ebp
  int v17; // ebx
  int v18; // r14d
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // rcx
  _DWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]

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
  v22[1] = top;
  v22[2] = v10;
  v22[3] = v7;
  v22[0] = left;
  v23 = v14;
  GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v22, 1u);
  v17 = GreSetTextColor(a1, v15);
  v18 = a3 & 0x10;
  v19 = L"x";
  if ( !v18 )
    v19 = L"o";
  GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, v19, 1u, 0LL, 0LL, 0);
  GreSetTextColor(a1, v16);
  v20 = L"y";
  if ( !v18 )
    v20 = L"p";
  GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, v20, 1u, 0LL, 0LL, 0);
  GreSetTextColor(a1, v17);
  return 1LL;
}
