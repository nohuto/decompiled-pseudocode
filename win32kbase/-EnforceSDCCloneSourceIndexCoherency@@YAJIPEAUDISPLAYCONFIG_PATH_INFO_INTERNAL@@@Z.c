/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C018F8A8
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00E2170 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00CA680 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall EnforceSDCCloneSourceIndexCoherency(unsigned int a1, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  char v2; // r11
  unsigned int v3; // esi
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *i; // rbx
  unsigned int v6; // ebp
  char *v7; // rdi
  int v8; // r8d
  char v9; // r10
  int v10; // r9d
  _DWORD *v11; // r14
  _DWORD *v12; // r15
  bool v13; // zf
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char v18; // [rsp+60h] [rbp+8h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v2 = 0;
  v3 = 0;
  if ( !a1 )
    return 0LL;
  for ( i = a2; ; i = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)i + 216) )
  {
    if ( *(__int64 *)i < 0 )
    {
      v6 = v3;
      if ( v3 < a1 )
        break;
    }
LABEL_27:
    if ( ++v3 >= a1 )
      return 0LL;
  }
  v7 = (char *)a2 + 216 * v3 + 16;
  while ( 1 )
  {
    if ( v6 != v3 )
    {
      v8 = *((_DWORD *)v7 + 2);
      v9 = 0;
      v10 = *((_DWORD *)i + 6);
      v18 = 0;
      if ( v8 == v10 && *(_DWORD *)v7 == *((_DWORD *)i + 4) && *((_DWORD *)v7 + 1) == *((_DWORD *)i + 5) && v8 != -2 )
      {
        v11 = (_DWORD *)((char *)i + 156);
        v12 = v7 + 140;
        v13 = *((_DWORD *)v7 + 35) == *((_DWORD *)i + 39);
        goto LABEL_19;
      }
      if ( *((_DWORD *)v7 + 35) == *((_DWORD *)i + 39) )
        break;
    }
LABEL_25:
    ++v6;
    v7 += 216;
    if ( v6 >= a1 )
    {
      a2 = v19;
      goto LABEL_27;
    }
  }
  v11 = (_DWORD *)((char *)i + 156);
  v12 = v7 + 140;
  if ( *(_DWORD *)v7 != *((_DWORD *)i + 4) || *((_DWORD *)v7 + 1) != *((_DWORD *)i + 5) || v8 != -2 && v10 != -2 )
    goto LABEL_20;
  v11 = (_DWORD *)((char *)i + 156);
  v12 = v7 + 140;
  if ( v7[85] )
    goto LABEL_20;
  v13 = v8 == v10;
LABEL_19:
  v9 = 1;
  v18 = 1;
  if ( v13 )
  {
LABEL_20:
    v14 = (-(__int64)(v9 != 0) & 0x8000000100LL) + 0x4000000020800LL;
    v15 = *(_QWORD *)i & v14;
    if ( (v14 & *((_QWORD *)v7 - 2)) != v15 )
    {
      v16 = ~v14 & *((_QWORD *)v7 - 1);
      *((_QWORD *)v7 - 2) = v15 | ~v14 & *((_QWORD *)v7 - 2);
      *((_QWORD *)v7 - 1) = v16 | v14 & *((_QWORD *)i + 1);
      if ( !v2 )
      {
        DrvDxgkLogCodePointPacket(57LL, v3, v6, 0);
        v9 = v18;
        v2 = 1;
      }
    }
    *(_QWORD *)(v7 + 108) = *(_QWORD *)((char *)i + 124);
    *(_QWORD *)(v7 + 116) = *(_QWORD *)((char *)i + 132);
    *v12 = *v11;
    *(_QWORD *)(v7 + 100) = *(_QWORD *)((char *)i + 116);
    if ( v9 )
    {
      *((_QWORD *)v7 + 9) = *((_QWORD *)i + 11);
      *((_DWORD *)v7 + 20) = *((_DWORD *)i + 24);
    }
    goto LABEL_25;
  }
  WdLogSingleEntry2(2LL, v3);
  return 3221225485LL;
}
