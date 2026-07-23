/*
 * XREFs of PspWow64GetContextThread @ 0x14067A4EC
 * Callers:
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x140963B2C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x140963C2C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14033F500 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpWriteExtendedContext @ 0x14067A7B8 (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x14067A874 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x14067AC30 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14067AC88 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406C0EA8 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1406C0FC0 (RtlpReadExtendedContext.c)
 */

NTSTATUS __fastcall PspWow64GetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  __int64 v8; // rdx
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  NTSTATUS result; // eax
  ULONG v13; // ebx
  unsigned __int64 v14; // rax
  void *v15; // rsp
  _CONTEXT *v16; // r15
  int v17; // ecx
  PCONTEXT_EX v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  void *v22; // rsp
  int v23; // r9d
  PCONTEXT_EX v24; // r10
  int v25; // ecx
  int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+28h] [rbp-28h]
  _BYTE v28[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v29; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  PCONTEXT_EX v32; // [rsp+68h] [rbp+18h] BYREF
  __int64 v33; // [rsp+70h] [rbp+20h]
  int v34[4]; // [rsp+78h] [rbp+28h] BYREF
  __int64 v35; // [rsp+88h] [rbp+38h]
  _BYTE v36[720]; // [rsp+90h] [rbp+40h] BYREF

  v33 = a1;
  v32 = 0LL;
  memset(v36, 0, 0x2CCuLL);
  ContextLength[0] = 0;
  ContextEx = 0LL;
  v28[0] = 0;
  *(_OWORD *)v34 = 0LL;
  v35 = 0LL;
  if ( a3 != 716 )
    return -1073741820;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = *(_QWORD *)(v9 + 1408);
  if ( !v10 || *(_WORD *)(v10 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v29 = *(_DWORD *)v11;
  }
  else
  {
    v29 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v29, v8);
  if ( result >= 0 )
  {
    v13 = v29;
    if ( !a4 )
    {
      v16 = (_CONTEXT *)a2;
      v18 = (PCONTEXT_EX)(a2 + 179);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v9, v26, v27, 0LL, (__int64)v28);
      if ( result >= 0 )
      {
        if ( v28[0] && (v13 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v19 = ContextLength[0] + 15LL;
            if ( v19 <= ContextLength[0] )
              v19 = 0xFFFFFFFFFFFFFF0LL;
            v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
            v21 = alloca(v20);
            v22 = alloca(v20);
            result = RtlInitializeExtendedContext((PCONTEXT)v28, 0x4010001Fu, &v32);
            if ( result >= 0 )
            {
              if ( (v13 & 0x10040) == 0x10040 )
              {
                v34[2] |= 0x100040u;
                v24 = v32;
                v32->XState = v18->XState;
                v24->XState.Offset += (_DWORD)v18 - (_DWORD)v24;
                v24->All.Length = v24->XState.Offset + v24->XState.Length - v24->All.Offset;
              }
              LOBYTE(v23) = 1;
              result = PspGetContextThreadInternal(v33, (unsigned int)v28, 0, v23, 1);
              if ( result >= 0 )
              {
                if ( v28[0] )
                  result = RtlCopyContext(v16, v16->P1Home, (PCONTEXT)v36);
                else
                  result = RtlpWow64GetContextOnAmd64(v36, v28, v16);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v25, (int)a2 + 716, (unsigned int)v34, v13, (__int64)v18);
                    ContextLength[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v29, ContextLength);
    if ( result >= 0 )
    {
      v14 = ContextLength[0] + 15LL;
      if ( v14 <= ContextLength[0] )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = (_CONTEXT *)v28;
      memset(v28, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v28, v13, &ContextEx);
      if ( result >= 0 )
      {
        v18 = ContextEx;
        result = RtlpReadExtendedContext(v17, 0, (_DWORD)ContextEx, v13, (__int64)a2, (__int64)v34);
        if ( result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
