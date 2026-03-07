__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // edi
  LONG right; // esi
  LONG top; // ebp
  LONG left; // r14d
  LONG bottom; // r15d
  __int64 v8; // rbx
  LONG v9; // r10d
  LONG v10; // r12d
  struct HOBJ__ *RectRgnIndirect; // rax
  struct HOBJ__ *v13; // rsi
  __int64 v14; // r8
  _DWORD *v15; // r9
  _QWORD *v16; // rdx
  _OWORD *v17; // rcx
  _DWORD *v18; // rax
  int **v19; // r8
  int *v20; // rax
  bool v21; // zf
  int *v22; // r11
  _DWORD *v23; // r11
  char *v24; // r11
  int v25; // eax
  _DWORD *v26; // r11
  int *v27; // r11
  int v28; // eax
  __int128 v29; // [rsp+20h] [rbp-48h]
  _QWORD v30[2]; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+40h] [rbp-28h]

  v2 = 0;
  if ( *a1 )
  {
    right = a2->right;
    top = a2->top;
    left = a2->left;
    bottom = a2->bottom;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v30, *a1, 0, 0);
    v8 = v30[0];
    if ( v30[0] )
    {
      *(_QWORD *)&v29 = __PAIR64__(top, left);
      v9 = left;
      *((_QWORD *)&v29 + 1) = __PAIR64__(bottom, right);
      v10 = top;
      if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
        && ((bottom & 0xF8000000) == 0 || (bottom & 0xF8000000) == 0xF8000000)
        && ((right & 0xF8000000) == 0 || (right & 0xF8000000) == 0xF8000000)
        && ((top & 0xF8000000) == 0 || (top & 0xF8000000) == 0xF8000000) )
      {
        if ( left > right )
        {
          v9 = right;
          LODWORD(v29) = right;
          right = left;
          DWORD2(v29) = left;
        }
        if ( top > bottom )
        {
          v10 = bottom;
          DWORD1(v29) = bottom;
          bottom = top;
          HIDWORD(v29) = top;
        }
        v15 = (_DWORD *)(v30[0] + 52LL);
        v16 = (_QWORD *)(v30[0] + 40LL);
        v17 = (_OWORD *)(v30[0] + 56LL);
        v18 = (_DWORD *)(v30[0] + 48LL);
        v19 = (int **)(v30[0] + 32LL);
        if ( v9 == right || v10 == bottom )
        {
          *v18 = 16;
          v20 = *v19;
          *v15 = 1;
          *v17 = 0LL;
          *v20 = 0;
          v2 = 1;
          v20[1] = 0x80000000;
          *((_QWORD *)v20 + 1) = 0x7FFFFFFFLL;
          *v16 = v20 + 4;
        }
        else
        {
          v21 = *v18 == 56;
          v22 = *v19;
          *v17 = v29;
          if ( v21 )
          {
            v25 = *v22;
            v2 = 1;
            v22[2] = v10;
            v26 = (int *)((char *)v22 + (unsigned int)(4 * v25 + 16));
            v26[1] = v10;
            v26[2] = bottom;
            v26[3] = v9;
            v26[4] = right;
            v27 = (_DWORD *)((char *)v26 + (unsigned int)(4 * *v26 + 16));
            v28 = *v27;
            v27[1] = bottom;
            *v16 = (char *)v27 + (unsigned int)(4 * v28 + 16);
          }
          else
          {
            *v18 = 56;
            *v15 = 3;
            *v22 = 0;
            v22[3] = 0;
            v22[1] = 0x80000000;
            v22[2] = v10;
            v23 = v22 + 4;
            *v23 = 2;
            v23[1] = v10;
            v23[2] = bottom;
            v23[3] = v9;
            v23[4] = right;
            v23[5] = 2;
            v24 = (char *)v23 + (unsigned int)(4 * *v23 + 16);
            *(_DWORD *)v24 = 0;
            *((_DWORD *)v24 + 1) = bottom;
            v2 = 1;
            *((_QWORD *)v24 + 1) = 0x7FFFFFFFLL;
            *v16 = v24 + 16;
          }
        }
      }
    }
    if ( !v31 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v30);
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v13 = RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  LOBYTE(v14) = 4;
  HmgSetOwner(v13, 0LL, v14);
  return 1LL;
}
