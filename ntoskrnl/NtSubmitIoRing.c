/*
 * XREFs of NtSubmitIoRing @ 0x1405575D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IopExceptionFilter @ 0x1405530E8 (IopExceptionFilter.c)
 *     IopIoRingGetAvailableCqSlots @ 0x1405571B8 (IopIoRingGetAvailableCqSlots.c)
 *     IopIoRingSetupCompletionWait @ 0x140557278 (IopIoRingSetupCompletionWait.c)
 *     IopIoRingWaitForCompletionEvent @ 0x1405574BC (IopIoRingWaitForCompletionEvent.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     IopProcessIoRingEntry @ 0x140947008 (IopProcessIoRingEntry.c)
 */

__int64 __fastcall NtSubmitIoRing(HANDLE Handle, __int16 a2, unsigned int a3, LARGE_INTEGER *a4)
{
  unsigned int v4; // r13d
  KPROCESSOR_MODE PreviousMode; // r9
  PVOID v6; // rdi
  char v7; // r12
  __int64 v8; // rax
  NTSTATUS v9; // eax
  int *v10; // r15
  unsigned int v11; // r14d
  PVOID v12; // rsi
  int v13; // r14d
  char v14; // al
  int v15; // r13d
  unsigned int v16; // ebx
  unsigned __int64 v17; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  char v22; // [rsp+30h] [rbp-A8h] BYREF
  char v23; // [rsp+31h] [rbp-A7h]
  int v24; // [rsp+34h] [rbp-A4h]
  KPROCESSOR_MODE v25; // [rsp+39h] [rbp-9Fh]
  int v26; // [rsp+3Ch] [rbp-9Ch]
  PVOID Object; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h] BYREF
  __int128 v30; // [rsp+60h] [rbp-78h]
  __int128 v31; // [rsp+70h] [rbp-68h]
  __int128 v32; // [rsp+80h] [rbp-58h]
  __int128 v33; // [rsp+90h] [rbp-48h]
  char v34; // [rsp+E8h] [rbp+10h]

  v34 = a2;
  v4 = a3;
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  v6 = 0LL;
  v7 = 0;
  v29 = 0LL;
  v22 = 0;
  if ( a2 )
  {
    v24 = -1069154303;
    goto LABEL_25;
  }
  if ( a3 && a4 && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a4;
    v29 = *(_QWORD *)v8;
    a4 = (LARGE_INTEGER *)&v29;
  }
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v24 = v9;
  if ( v9 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)Object + 24, 1, 0) )
    {
      v24 = -1069154298;
      goto LABEL_25;
    }
    v7 = 1;
    v10 = (int *)*((_QWORD *)v6 + 8);
    v28 = *((_DWORD *)v6 + 6);
    v26 = v10[1];
    v11 = v26 - *v10;
    v12 = Object;
    if ( v11 > *((_DWORD *)Object + 5) )
    {
      v24 = -1069154297;
      goto LABEL_25;
    }
    if ( v4 )
    {
      v24 = IopIoRingSetupCompletionWait((__int64)Object, v11, v4, 0, &v22);
      if ( v24 < 0 )
        goto LABEL_25;
    }
    else
    {
      v12 = Object;
      v19 = *((_QWORD *)Object + 14)
          + (unsigned int)(*(_DWORD *)(*((_QWORD *)Object + 10) + 4LL) - **((_DWORD **)Object + 10))
          - *((_QWORD *)Object + 15);
      v20 = *((unsigned int *)Object + 7);
      if ( v19 < v20 )
        v21 = v20 - v19;
      else
        v21 = 0;
      if ( v11 > v21 && v11 > (unsigned int)IopIoRingGetAvailableCqSlots((__int64)Object) )
      {
        v24 = -1069154296;
        goto LABEL_25;
      }
    }
    v13 = *v10;
    v14 = 0;
    v23 = 0;
    if ( v13 != v26 )
    {
      v15 = v26;
      v16 = v28;
      do
      {
        v17 = (unsigned __int64)(v13 & v16) << 6;
        v30 = *(_OWORD *)((char *)v10 + v17 + 16);
        v31 = *(_OWORD *)((char *)v10 + v17 + 32);
        v32 = *(_OWORD *)((char *)v10 + v17 + 48);
        v33 = *(_OWORD *)((char *)v10 + v17 + 64);
        *v10 = ++v13;
        IopProcessIoRingEntry((__int64)v12);
      }
      while ( v13 != v15 );
      v14 = v23;
      v4 = a3;
    }
    if ( v22 )
    {
      if ( !v14 || (v24 = IopIoRingSetupCompletionWait((__int64)v12, 0, v4, 1, &v22), v24 >= 0) )
      {
        if ( v22 )
          v24 = IopIoRingWaitForCompletionEvent((__int64)v12, v25, v34 & 1, a4);
      }
    }
  }
LABEL_25:
  if ( v7 )
    _InterlockedExchange((volatile __int32 *)v6 + 24, 0);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  return (unsigned int)v24;
}
