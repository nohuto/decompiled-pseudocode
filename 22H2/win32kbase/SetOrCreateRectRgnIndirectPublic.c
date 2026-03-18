/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C003EDB0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  LONG right; // esi
  LONG top; // edi
  LONG bottom; // ebp
  LONG left; // r14d
  LONG v8; // r11d
  LONG v9; // r15d
  __int64 RectRgnIndirect; // rax
  unsigned int v12; // esi
  _DWORD *v13; // r9
  _QWORD *v14; // r8
  _OWORD *v15; // rcx
  _DWORD *v16; // rax
  int **v17; // rdx
  int *v18; // rax
  bool v19; // zf
  int *v20; // r10
  _DWORD *v21; // r10
  char *v22; // r10
  int v23; // eax
  _DWORD *v24; // r10
  int *v25; // r10
  int v26; // eax
  __int128 v27; // [rsp+20h] [rbp-68h]
  _QWORD v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  if ( *a1 )
  {
    right = a2->right;
    top = a2->top;
    bottom = a2->bottom;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v28, *a1, 0, 0);
    if ( v28[0] )
    {
      *(_QWORD *)&v27 = __PAIR64__(top, left);
      v8 = left;
      *((_QWORD *)&v27 + 1) = __PAIR64__(bottom, right);
      v9 = top;
      if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
        && ((bottom & 0xF8000000) == 0 || (bottom & 0xF8000000) == 0xF8000000)
        && ((right & 0xF8000000) == 0 || (right & 0xF8000000) == 0xF8000000)
        && ((top & 0xF8000000) == 0 || (top & 0xF8000000) == 0xF8000000) )
      {
        if ( left > right )
        {
          v8 = right;
          LODWORD(v27) = right;
          right = left;
          DWORD2(v27) = left;
        }
        if ( top > bottom )
        {
          v9 = bottom;
          DWORD1(v27) = bottom;
          bottom = top;
          HIDWORD(v27) = top;
        }
        v13 = (_DWORD *)(v28[0] + 52LL);
        v14 = (_QWORD *)(v28[0] + 40LL);
        v15 = (_OWORD *)(v28[0] + 56LL);
        v16 = (_DWORD *)(v28[0] + 48LL);
        v17 = (int **)(v28[0] + 32LL);
        if ( v8 == right || v9 == bottom )
        {
          *v16 = 16;
          v18 = *v17;
          *v13 = 1;
          *v15 = 0LL;
          *v18 = 0;
          v2 = 1;
          v18[1] = 0x80000000;
          *((_QWORD *)v18 + 1) = 0x7FFFFFFFLL;
          *v14 = v18 + 4;
        }
        else
        {
          v19 = *v16 == 56;
          v20 = *v17;
          *v15 = v27;
          if ( v19 )
          {
            v23 = *v20;
            v2 = 1;
            v20[2] = v9;
            v24 = (int *)((char *)v20 + (unsigned int)(4 * v23 + 16));
            v24[1] = v9;
            v24[2] = bottom;
            v24[3] = v8;
            v24[4] = right;
            v25 = (_DWORD *)((char *)v24 + (unsigned int)(4 * *v24 + 16));
            v26 = *v25;
            v25[1] = bottom;
            *v14 = (char *)v25 + (unsigned int)(4 * v26 + 16);
          }
          else
          {
            *v16 = 56;
            *v13 = 3;
            *v20 = 0;
            v20[3] = 0;
            v20[1] = 0x80000000;
            v20[2] = v9;
            v21 = v20 + 4;
            *v21 = 2;
            v21[1] = v9;
            v21[2] = bottom;
            v21[3] = v8;
            v21[4] = right;
            v21[5] = 2;
            v22 = (char *)v21 + (unsigned int)(4 * *v21 + 16);
            *(_DWORD *)v22 = 0;
            *((_DWORD *)v22 + 1) = bottom;
            v2 = 1;
            *((_QWORD *)v22 + 1) = 0x7FFFFFFFLL;
            *v14 = v22 + 16;
          }
        }
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v28);
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v12 = RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  HmgSetOwner(v12, 0, 4);
  return 1LL;
}
