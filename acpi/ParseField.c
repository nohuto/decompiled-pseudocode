/*
 * XREFs of ParseField @ 0x1C005AB30
 * Callers:
 *     ParseFieldList @ 0x1C005B230 (ParseFieldList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyNA @ 0x1C002BADC (RtlStringCchCopyNA.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintIndent @ 0x1C004E484 (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     ParseFieldConnection @ 0x1C005AF60 (ParseFieldConnection.c)
 *     ParsePackageLen @ 0x1C005BEFC (ParsePackageLen.c)
 */

__int64 __fastcall ParseField(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned __int8 *a5, _DWORD **a6)
{
  unsigned int v6; // ebp
  __int64 v9; // r13
  int v10; // esi
  unsigned __int8 **v12; // rbx
  const char *v13; // rdx
  char v14; // r8
  int v15; // eax
  const char *v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // r13
  unsigned int v20; // r8d
  void *v21; // rax
  __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // ecx
  unsigned __int8 *v25; // rax
  bool v26; // r12
  unsigned __int8 *v27; // r15
  char v28; // cl
  int v29; // ecx
  bool v30; // zf
  unsigned __int8 *v31; // rax
  __int64 v33; // [rsp+30h] [rbp-78h]
  __int64 v34; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 *v35; // [rsp+40h] [rbp-68h]
  char pszDest[8]; // [rsp+48h] [rbp-60h] BYREF

  v6 = 0;
  v33 = a2;
  v9 = a2;
  v35 = a5;
  v10 = 1;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 112), 1u);
  v12 = (unsigned __int8 **)(a1 + 120);
  v13 = *(const char **)(a1 + 120);
  v14 = *v13;
  if ( ((*v13 - 1) & 0xFD) != 0 )
  {
    if ( v14 == 2 )
    {
      *v12 = (unsigned __int8 *)(v13 + 1);
      v15 = ParseFieldConnection(a1, a6);
      v6 = v15;
      if ( v15 )
      {
        LogError(v15);
        AcpiDiagTraceAmlError(a1, v6);
        PrintDebugMessage(125, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        (*a6)[1] = *a4;
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1);
          v16 = (const char *)(*a6 + 4);
          if ( **a6 == 1 )
            ConPrintf("Connection(%s)", v16);
          else
            ConPrintf(
              "Connection(%02x %02x %02x %02x ...)",
              *(unsigned __int8 *)v16,
              *((unsigned __int8 *)*a6 + 17),
              *((unsigned __int8 *)*a6 + 18),
              *((unsigned __int8 *)*a6 + 19));
        }
      }
    }
    else
    {
      v17 = (*(_DWORD *)a3 & 0xF) - 1;
      if ( v17 <= 3 )
        v10 = 1 << v17;
      v34 = 0LL;
      if ( v14 )
      {
        RtlStringCchCopyNA(pszDest, 5uLL, v13, 4uLL);
        *v12 += 4;
      }
      else
      {
        pszDest[0] = 0;
        *v12 = (unsigned __int8 *)(v13 + 1);
      }
      v18 = ParsePackageLen(v12, 0LL);
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        if ( pszDest[0] )
        {
          ConPrintf("%s,%d", pszDest, v18);
        }
        else if ( v18 <= 0x20 || (((_BYTE)v18 + *(_BYTE *)a4) & 7) != 0 )
        {
          ConPrintf(",%d", v18);
        }
        else
        {
          ConPrintf("Offset(0x%x)", (v18 + *a4) >> 3);
        }
      }
      v6 = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             (unsigned __int8 *)pszDest,
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             &v34,
             0);
      if ( !v6 )
      {
        v19 = v34;
        v20 = 40;
        *(_WORD *)(v34 + 66) = 5;
        *(_DWORD *)(v19 + 88) = 40;
        if ( *a6 )
        {
          v20 = (*a6)[3] + 40;
          *(_DWORD *)(v19 + 88) = v20;
        }
        v21 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1430537800, v20);
        *(_QWORD *)(v19 + 96) = v21;
        if ( v21 )
        {
          memset(v21, 0, *(unsigned int *)(v19 + 88));
          v22 = *(_QWORD *)(v19 + 96);
          *(_QWORD *)v22 = v33;
          v33 = 0LL;
          *(_DWORD *)(v22 + 20) = *(_DWORD *)a3;
          v23 = v10 * (*a4 / (unsigned int)(8 * v10));
          *(_DWORD *)(v22 + 8) = v23;
          v24 = *a4 - 8 * v23;
          *(_DWORD *)(v22 + 16) = v18;
          v25 = v35;
          *(_DWORD *)(v22 + 12) = v24;
          *(_BYTE *)(v22 + 24) = *v25;
          if ( *a6 )
          {
            *(_DWORD *)(v22 + 28) = **a6;
            *(_DWORD *)(v22 + 32) = (*a6)[1];
            *(_DWORD *)(v22 + 36) = (*a6)[3];
            memmove((void *)(v22 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
          }
          *a4 += v18;
        }
        else
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(124, 0LL, 0LL, 0LL, 0LL);
        }
        DereferenceObjectEx(v19);
        v9 = v33;
      }
    }
    goto LABEL_47;
  }
  *v12 = (unsigned __int8 *)(v13 + 1);
  v26 = v14 == 3;
  *(_DWORD *)a3 &= 0xFFFFFFF0;
  *(_DWORD *)a3 |= **v12 & 0xF;
  if ( v14 != 3 && (**v12 & 0xC0) != 0 )
  {
    v27 = (unsigned __int8 *)(a3 + 1);
    *(_BYTE *)(a3 + 1) = 0;
    v28 = **v12 & 0xC0;
    if ( v28 == 64 )
    {
      v29 = 2816;
    }
    else
    {
      v30 = v28 == (char)0x80;
      v29 = 3584;
      if ( !v30 )
        v29 = 3840;
    }
    v26 = 1;
    *(_DWORD *)a3 |= v29;
    v31 = ++*v12;
    goto LABEL_41;
  }
  ++*v12;
  v27 = (unsigned __int8 *)(a3 + 1);
  *(_BYTE *)(a3 + 1) = 0;
  *(_DWORD *)a3 |= *(*v12)++ << 8;
  v31 = *v12;
  if ( v14 == 3 )
  {
LABEL_41:
    *a5 = *v31;
    ++*v12;
    goto LABEL_43;
  }
  *a5 = 0;
LABEL_43:
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    ConPrintf("AccessAs(0x%x,0x%x", (unsigned __int8)*(_DWORD *)a3, *v27);
    if ( v26 )
      ConPrintf(",0x%x)\n", *v35);
    else
      ConPrintf(")\n");
  }
LABEL_47:
  if ( v9 )
    DereferenceObjectEx(v9);
  return v6;
}
