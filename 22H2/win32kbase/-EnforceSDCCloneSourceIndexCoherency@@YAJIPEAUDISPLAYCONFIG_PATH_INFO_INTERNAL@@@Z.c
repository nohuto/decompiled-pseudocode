/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0145440
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00CFC70 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3ED0 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall EnforceSDCCloneSourceIndexCoherency(unsigned int a1, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  char v2; // r13
  unsigned int v3; // esi
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *i; // rdi
  unsigned int v7; // ebp
  char *v8; // rbx
  __int64 v9; // rcx
  char v10; // r15
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rax

  v2 = 0;
  v3 = 0;
  if ( !a1 )
    return 0LL;
  for ( i = a2; ; i = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)i + 200) )
  {
    if ( *(__int64 *)i < 0 )
    {
      v7 = v3;
      if ( v3 < a1 )
        break;
    }
LABEL_26:
    if ( ++v3 >= a1 )
      return 0LL;
  }
  v8 = (char *)a2 + 200 * v3 + 16;
  while ( 1 )
  {
    if ( v7 != v3 )
    {
      v9 = *((unsigned int *)v8 + 2);
      v10 = 0;
      v11 = *((unsigned int *)i + 6);
      if ( (_DWORD)v9 == (_DWORD)v11
        && *(_DWORD *)v8 == *((_DWORD *)i + 4)
        && *((_DWORD *)v8 + 1) == *((_DWORD *)i + 5)
        && (_DWORD)v9 != -2 )
      {
        v12 = *((_DWORD *)v8 + 35) == *((_DWORD *)i + 39);
        goto LABEL_19;
      }
      if ( *((_DWORD *)v8 + 35) == *((_DWORD *)i + 39) )
        break;
    }
LABEL_25:
    ++v7;
    v8 += 200;
    if ( v7 >= a1 )
      goto LABEL_26;
  }
  if ( *(_DWORD *)v8 != *((_DWORD *)i + 4)
    || *((_DWORD *)v8 + 1) != *((_DWORD *)i + 5)
    || (_DWORD)v9 != -2 && (_DWORD)v11 != -2
    || v8[85] )
  {
    goto LABEL_20;
  }
  v12 = (_DWORD)v9 == (_DWORD)v11;
LABEL_19:
  v10 = 1;
  if ( v12 )
  {
LABEL_20:
    v13 = (-(__int64)(v10 != 0) & 0x8000000100LL) + 0x4000000020800LL;
    v14 = *(_QWORD *)i & v13;
    if ( (v13 & *((_QWORD *)v8 - 2)) != v14 )
    {
      v15 = ~v13 & *((_QWORD *)v8 - 1);
      *((_QWORD *)v8 - 2) = v14 | ~v13 & *((_QWORD *)v8 - 2);
      *((_QWORD *)v8 - 1) = v15 | v13 & *((_QWORD *)i + 1);
      if ( !v2 )
      {
        v2 = 1;
        DrvDxgkLogCodePointPacket(57, v3, v7, 0);
      }
    }
    *(_QWORD *)(v8 + 108) = *(_QWORD *)((char *)i + 124);
    *(_QWORD *)(v8 + 116) = *(_QWORD *)((char *)i + 132);
    *((_DWORD *)v8 + 35) = *((_DWORD *)i + 39);
    *(_QWORD *)(v8 + 100) = *(_QWORD *)((char *)i + 116);
    if ( v10 )
    {
      *((_QWORD *)v8 + 9) = *((_QWORD *)i + 11);
      *((_DWORD *)v8 + 20) = *((_DWORD *)i + 24);
    }
    goto LABEL_25;
  }
  v17 = WdLogNewEntry5_WdError(v9, v11);
  *(_QWORD *)(v17 + 24) = v3;
  *(_QWORD *)(v17 + 32) = v7;
  WdLogEvent5_WdError(v17);
  return 3221225485LL;
}
