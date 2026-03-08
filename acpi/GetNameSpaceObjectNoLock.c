/*
 * XREFs of GetNameSpaceObjectNoLock @ 0x1C004F840
 * Callers:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484D0 (AMLIGetNameSpaceObjectNoLock.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall GetNameSpaceObjectNoLock(const char *a1, __int64 a2, __int64 *a3, int a4)
{
  bool v4; // zf
  __int64 v5; // rbx
  char v6; // dl
  const char *v9; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  char v12; // r12
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // rax
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+20h]

  v19 = a4;
  v4 = a2 == 0;
  v5 = a2;
  v6 = *a1;
  if ( v4 )
    v5 = gpnsNameSpaceRoot;
  if ( v6 == 92 )
  {
    v9 = a1 + 1;
    v5 = gpnsNameSpaceRoot;
  }
  else
  {
    v9 = a1;
    if ( v6 == 94 )
    {
      do
      {
        if ( !v5 )
          break;
        v5 = *(_QWORD *)(v5 + 16);
        ++v9;
      }
      while ( *v9 == 94 );
    }
  }
  *a3 = v5;
  if ( v5 )
  {
    if ( *v9 )
    {
      if ( (a4 & 1) != 0 )
        goto LABEL_17;
      if ( ((*a1 - 92) & 0xFD) == 0 )
        goto LABEL_17;
      v11 = -1LL;
      do
        ++v11;
      while ( a1[v11] );
      if ( v11 > 4 )
LABEL_17:
        v12 = 0;
      else
        v12 = 1;
      while ( 1 )
      {
LABEL_18:
        v13 = (_QWORD *)(v5 + 24);
        if ( (_QWORD *)*v13 != v13 )
        {
          v14 = (__int64)strchr(v9, 46);
          if ( v14 )
          {
            LODWORD(v14) = v14 - (_DWORD)v9;
          }
          else
          {
            v14 = -1LL;
            do
              ++v14;
            while ( v9[v14] );
          }
          if ( (unsigned int)v14 > 4 )
          {
            v10 = -1073741773;
            LogError(-1073741773);
            AcpiDiagTraceAmlError(0LL, -1073741773);
            PrintDebugMessage(57, a1, 0LL, 0LL, 0LL);
            goto LABEL_41;
          }
          v18 = 1600085855;
          v15 = (unsigned int)v14;
          memmove(&v18, v9, (unsigned int)v14);
          v16 = (_QWORD *)*v13;
          if ( v13 != (_QWORD *)*v13 )
          {
            while ( v16[2] )
            {
              if ( *((_DWORD *)v16 + 10) == v18 )
              {
                v9 += v15;
                v5 = (__int64)v16;
                if ( *v9 == 46 )
                {
                  ++v9;
                  goto LABEL_18;
                }
                if ( !*v9 )
                {
                  *a3 = (__int64)v16;
                  goto LABEL_36;
                }
                goto LABEL_18;
              }
              v16 = (_QWORD *)*v16;
              if ( v13 == v16 )
                break;
            }
          }
        }
        v10 = -1073741772;
        if ( v12 )
        {
          if ( v5 )
          {
            v5 = *(_QWORD *)(v5 + 16);
            if ( v5 )
              continue;
          }
        }
        goto LABEL_41;
      }
    }
LABEL_36:
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    return 0;
  }
  else
  {
    v10 = -1073741772;
LABEL_41:
    if ( v19 < 0 && v10 == -1073741772 )
    {
      LogError(-1073741772);
      AcpiDiagTraceAmlError(0LL, -1073741772);
      PrintDebugMessage(58, a1, 0LL, 0LL, 0LL);
    }
    *a3 = 0LL;
  }
  return v10;
}
