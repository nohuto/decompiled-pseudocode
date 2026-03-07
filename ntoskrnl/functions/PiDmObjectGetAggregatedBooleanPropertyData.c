__int64 __fastcall PiDmObjectGetAggregatedBooleanPropertyData(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        unsigned int a8,
        _DWORD *a9)
{
  int v9; // r15d
  _BYTE *v12; // r12
  int Object; // ebx
  __int64 v15; // r9
  char *v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r10
  __int64 v20; // rcx
  __int64 *v21; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rbx
  __int64 *v24; // rdi
  ULONG_PTR v25; // r14
  ULONG_PTR v26; // rcx
  int v27; // eax
  _QWORD **v28; // r13
  _QWORD *v29; // r14
  char *v30; // rdx
  int ObjectProperty; // eax
  int v32; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR v34; // [rsp+70h] [rbp-10h]
  char v35; // [rsp+C0h] [rbp+40h] BYREF
  int v36; // [rsp+D0h] [rbp+50h] BYREF
  int v37; // [rsp+D4h] [rbp+54h]

  v37 = HIDWORD(a3);
  BugCheckParameter2 = 0LL;
  v9 = 0;
  v36 = 0;
  v32 = 0;
  v12 = (_BYTE *)a7;
  v35 = 0;
  Object = -1073741802;
  if ( a7 )
  {
    v15 = a8;
    v12 = (_BYTE *)(-(__int64)(a8 != 0) & a7);
  }
  else
  {
    v15 = 0LL;
  }
  if ( a1 < 7 && !a4 )
  {
    v16 = byte_140001518;
    v17 = 0;
    while ( 1 )
    {
      v18 = *((_QWORD *)v16 + 1);
      if ( *(_DWORD *)(v18 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v20 = *(_QWORD *)v18 - *(_QWORD *)a5;
        if ( *(_QWORD *)v18 == *(_QWORD *)a5 )
          v20 = *(_QWORD *)(v18 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v20 && a1 == *(_DWORD *)v16 )
          break;
      }
      ++v17;
      v16 += 56;
      if ( v17 >= 3 )
        return (unsigned int)Object;
    }
    v21 = &PiDmAggregatedBooleanDefs[7 * v17];
    if ( v21 )
    {
      *a6 = 17;
      *a9 = 1;
      if ( (_DWORD)v15 )
      {
        Object = PiDmGetObject((unsigned int)a1, a2, &BugCheckParameter2, v15);
        if ( Object >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v23 = v21[6];
          v24 = (__int64 *)BugCheckParameter2;
          v25 = BugCheckParameter2;
          v26 = BugCheckParameter2;
          --CurrentThread->KernelApcDisable;
          a7 = v23;
          v34 = v25;
          ExAcquirePushLockExclusiveEx(v26, 0LL);
          v27 = *(_DWORD *)(v25 + v23);
          if ( v27 == 0x80000000 )
          {
            v28 = (_QWORD **)((char *)v24 + PiDmListDefs[5 * *((int *)v21 + 10) + 1]);
            v29 = *v28;
            if ( *v28 != v28 )
            {
              do
              {
                v30 = (char *)v29 - PiDmListDefs[5 * *((int *)v21 + 10) + 3];
                ObjectProperty = PnpGetObjectProperty(
                                   PiPnpRtlCtx,
                                   *((_QWORD *)v30 + 2),
                                   *((_DWORD *)v30 + 7),
                                   0,
                                   0LL,
                                   v21[1],
                                   (__int64)&v36,
                                   (__int64)&v35,
                                   1,
                                   (__int64)&v32,
                                   0);
                Object = ObjectProperty;
                if ( ObjectProperty < 0 )
                {
                  if ( ObjectProperty != -1073741275 )
                    goto LABEL_19;
                }
                else if ( v36 == 17 && v35 == -1 )
                {
                  ++v9;
                }
                v29 = (_QWORD *)*v29;
              }
              while ( v29 != v28 );
              v23 = a7;
            }
            *(_DWORD *)(v34 + v23) = v9;
            v27 = v9;
          }
          *v12 = (v27 <= 0) - 1;
          Object = 0;
LABEL_19:
          ExReleasePushLockEx(v24, 0LL);
          KeLeaveCriticalRegion();
          PiDmObjectRelease(v24);
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)Object;
}
