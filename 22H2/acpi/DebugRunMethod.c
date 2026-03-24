/*
 * XREFs of DebugRunMethod @ 0x1C0066440
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     GetBaseObject @ 0x1C001477C (GetBaseObject.c)
 *     GetObjectPath @ 0x1C0023A98 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C0031D29 (_strtoui64_0.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 *     DebugExpr @ 0x1C0065E5C (DebugExpr.c)
 *     IsNumber @ 0x1C0066824 (IsNumber.c)
 *     RunMethodCallBack @ 0x1C0066A50 (RunMethodCallBack.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  _QWORD *ObjectPath; // rax
  void *v10; // rdx
  void *v11; // rbx
  unsigned __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    PrintDebugMessage(235, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
    v2 = -4;
LABEL_27:
    dword_1C0081534 = -1;
    return v2;
  }
  if ( a2 )
  {
    if ( dword_1C0081534 != -1 )
    {
      if ( dword_1C0081534 >= 7 )
      {
        PrintDebugMessage(236, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        v5 = 5LL * dword_1C0081534;
        *(_OWORD *)((char *)&unk_1C0083370 + 8 * v5) = 0LL;
        *(_OWORD *)((char *)&unk_1C0083370 + 8 * v5 + 16) = 0LL;
        *((_QWORD *)&unk_1C0083370 + v5 + 4) = 0LL;
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v6 = 5LL * dword_1C0081534;
          *((_QWORD *)&unk_1C0083370 + v6 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C0081534;
          *((_WORD *)&unk_1C0083370 + 4 * v6 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, a2, 0LL, 0LL, 0LL);
      }
      v2 = -2;
      goto LABEL_27;
    }
    v13[0] = 0LL;
    v14 = 0LL;
    v2 = DebugExpr(a2, v13, &v14);
    if ( v2 )
      goto LABEL_27;
    if ( !v14 )
    {
      PrintDebugMessage(232, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_3;
    }
    qword_1C0083488 = GetBaseObject(v14);
    DereferenceObjectEx(v4);
    dword_1C0081534 = 0;
  }
  else
  {
    if ( dword_1C0081534 < 0 )
    {
      PrintDebugMessage(226, 0LL, 0LL, 0LL, 0LL);
      v2 = -4;
    }
    else
    {
      qword_1C00834F8 = 0LL;
      fRunningMethod = 1;
      xmmword_1C00834D8 = 0LL;
      xmmword_1C00834E8 = 0LL;
      v7 = AsyncEvalObject(
             qword_1C0083488,
             (_SLIST_ENTRY *)&xmmword_1C00834D8,
             dword_1C0081534,
             (__int64)&unk_1C0083370,
             (__int64)RunMethodCallBack,
             0LL,
             1);
      v8 = v7;
      if ( v7 == 32772 )
      {
        ObjectPath = GetObjectPath(qword_1C0083488);
        v10 = &unk_1C00701BA;
        v11 = ObjectPath;
        if ( ObjectPath )
          v10 = ObjectPath;
        ConPrintf("\n%s returned PENDING\n", v10);
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
      }
      else
      {
        RunMethodCallBack(qword_1C0083488 + 120, v7, &xmmword_1C00834D8, 0LL);
        if ( v8 )
          v2 = -4;
      }
      DereferenceObjectEx(qword_1C0083488);
      qword_1C0083488 = 0LL;
      dword_1C0081534 = -1;
    }
    if ( v2 )
      goto LABEL_27;
  }
  return v2;
}
