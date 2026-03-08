/*
 * XREFs of ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C0223B5A
 * Callers:
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C0334914 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 * Callees:
 *     ?GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z @ 0x1C0334828 (-GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z.c)
 */

void __fastcall RotateCursorShapeWorker(struct CURSOR_INFO *a1, const struct CURSOR_INFO *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r15d
  unsigned int v6; // r13d
  unsigned int v7; // ebp
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // bl
  _BYTE *v12; // r8
  _DWORD *v13; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v14; // [rsp+20h] [rbp-58h]
  unsigned int v15; // [rsp+28h] [rbp-50h]
  unsigned int v16; // [rsp+30h] [rbp-48h]
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF

  v18 = 0;
  v2 = 0;
  v17 = 0;
  v4 = *((_DWORD *)a1 + 2);
  v6 = *(_DWORD *)a1;
  if ( v4 )
  {
    do
    {
      v7 = 0;
      if ( v6 )
      {
        v8 = 0LL;
        do
        {
          v9 = *((_QWORD *)a2 + 3);
          v16 = *((_DWORD *)a2 + 2);
          v10 = v2 * *((_DWORD *)a2 + 4);
          v15 = *(_DWORD *)a2;
          v14 = *((_DWORD *)a1 + 8);
          if ( *((_DWORD *)a1 + 9) )
          {
            v11 = (*(_BYTE *)((v8 >> 3) + v10 + v9) >> (7 - (v7 & 7))) & 1;
            GetRotatedPoint(v7, v2, &v18, &v17, v14, v15, v16);
            v12 = (_BYTE *)(*((_QWORD *)a1 + 3) + ((unsigned __int64)v18 >> 3) + *((_DWORD *)a1 + 5) * v17);
            *v12 = (v11 << (7 - (v18 & 7))) | *v12 & ~(1 << (7 - (v18 & 7)));
          }
          else
          {
            v13 = (_DWORD *)(v9 + v10 + 4 * v7);
            GetRotatedPoint(v7, v2, &v18, &v17, v14, v15, v16);
            *(_DWORD *)(4 * v18 + (unsigned __int64)(*((_DWORD *)a1 + 5) * v17) + *((_QWORD *)a1 + 3)) = *v13;
          }
          ++v7;
          ++v8;
        }
        while ( v7 < v6 );
      }
      ++v2;
    }
    while ( v2 < v4 );
  }
}
