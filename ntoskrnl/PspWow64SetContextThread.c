__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, unsigned int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  _KPROCESS *Process; // r12
  __int64 v10; // rax
  __int64 result; // rax
  bool v12; // zf
  unsigned int v13; // edi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  unsigned int *v18; // r15
  int v19; // edx
  int v20; // ecx
  struct _KPROCESS *v21; // rbx
  char v22; // bl
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  void *v25; // rsp
  void *v26; // rsp
  int v27; // r9d
  bool v28; // dl
  __int64 v29; // rcx
  int v30; // ebx
  __int64 ThreadTeb; // rax
  _DWORD *v32; // r8
  int v33; // ecx
  int v34; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+20h] [rbp-30h]
  int v36; // [rsp+28h] [rbp-28h]
  int v37; // [rsp+28h] [rbp-28h]
  __int16 v38; // [rsp+50h] [rbp+0h] BYREF
  char v39; // [rsp+52h] [rbp+2h]
  unsigned int v40; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v41; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v42[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  __int64 v43; // [rsp+68h] [rbp+18h] BYREF
  PETHREAD Threada; // [rsp+70h] [rbp+20h]
  _DWORD v45[180]; // [rsp+80h] [rbp+30h] BYREF

  v39 = a4;
  v43 = 0LL;
  memset(v45, 0, 0x2CCuLL);
  v41 = 0;
  v38 = 0;
  memset(v42, 0, sizeof(v42));
  if ( a3 != 716 )
    return 3221225476LL;
  Threada = KeGetCurrentThread();
  Process = Thread->Process;
  if ( !Process[1].Affinity.StaticBitmap[30] || WORD2(Process[2].Affinity.StaticBitmap[20]) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    v40 = *(_DWORD *)v10;
  }
  else
  {
    v40 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v40, v8);
  if ( (int)result >= 0 )
  {
    v12 = a4 == 0;
    v13 = v40;
    if ( v12 )
    {
      v18 = a2;
      *(_QWORD *)&v42[1] = a2 + 179;
    }
    else
    {
      result = RtlGetExtendedContextLength(v40, (__int64)&v41);
      if ( (int)result < 0 )
        return result;
      v14 = v41 + 15LL;
      if ( v14 <= v41 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = alloca(v15);
      v17 = alloca(v15);
      v18 = (unsigned int *)&v38;
      result = RtlInitializeExtendedContext((__int64)&v38, v13, (__int64)&v42[1]);
      if ( (int)result < 0 )
        return result;
      LOBYTE(v19) = 1;
      result = RtlpReadExtendedContext(v20, v19, v42[1], v13, (__int64)a2, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    v21 = IoThreadToProcess(Thread);
    if ( v21 == IoThreadToProcess(Threada) && (*(_DWORD *)&Process->0 & 0x20) != 0 && (*v18 & 0x10001) == 0x10001 )
    {
      ThreadTeb = PsGetThreadTeb((__int64)Thread);
      if ( !(unsigned int)RtlGuardIsValidWow64StackPointer(v18[49], ThreadTeb) )
        return 3221225485LL;
    }
    result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v34, v36, (__int64)v42, (__int64)&v38);
    if ( (int)result >= 0 )
    {
      v22 = v38;
      if ( (_BYTE)v38 && (v13 & 0x10040) == 0x10040 )
      {
        return 3221225659LL;
      }
      else
      {
        result = RtlGetExtendedContextLength(1048607LL, (__int64)&v41);
        if ( (int)result >= 0 )
        {
          v23 = v41 + 15LL;
          if ( v23 <= v41 )
            v23 = 0xFFFFFFFFFFFFFF0LL;
          v24 = v23 & 0xFFFFFFFFFFFFFFF0uLL;
          v25 = alloca(v24);
          v26 = alloca(v24);
          result = RtlInitializeExtendedContext((__int64)&v38, 0x10001Fu, (__int64)&v43);
          if ( (int)result >= 0 )
          {
            LOBYTE(v27) = 1;
            result = PspGetContextThreadInternal((_DWORD)Thread, (unsigned int)&v38, 0, v27, 1);
            if ( (int)result >= 0 )
            {
              result = v22
                     ? RtlCopyContext(v45, *v18, v18)
                     : RtlpWow64SetContextOnAmd64(v45, &v38, v18, (char *)&v38 + 1);
              if ( (int)result >= 0 )
              {
                if ( LOWORD(v45[2]) != 35 )
                {
                  v28 = 0;
                  if ( (v13 & 0x10040) != 0x10040 )
                    v28 = (v13 & 0x10002) != 65538 && (v13 & 0x10020) != 65568;
                  if ( !v28 )
                    v42[0] |= 1u;
                }
                result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v35, v37, (__int64)v42, 0LL);
                v30 = result;
                if ( (int)result >= 0 )
                {
                  if ( HIBYTE(v38) )
                  {
                    if ( (v13 & 0x10040) == 0x10040 )
                    {
                      v45[0] |= 0x100040u;
                      v32 = (_DWORD *)v43;
                      v33 = v42[1];
                      *(_QWORD *)(v43 + 16) = *(_QWORD *)(*(_QWORD *)&v42[1] + 16LL);
                      v32[4] += v33 - (_DWORD)v32;
                      v32[1] = v32[4] + v32[5] - *v32;
                    }
                    v30 = PspSetContextThreadInternal(Thread, 1);
                  }
                  if ( v30 >= 0 )
                  {
                    if ( v39 )
                    {
                      LOBYTE(v29) = KeGetCurrentThread()->PreviousMode;
                      EtwTiLogSetContextThread(v29, Thread, v18, v40);
                    }
                  }
                  return (unsigned int)v30;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
