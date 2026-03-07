__int64 __fastcall xxxClientAddFontResourceW(void **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *v6; // rdi
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  _BYTE v11[4]; // [rsp+30h] [rbp-2E8h] BYREF
  int v12; // [rsp+34h] [rbp-2E4h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2E0h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-2D8h] BYREF
  __int128 v15; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-2C0h]
  __int64 v17; // [rsp+60h] [rbp-2B8h]
  unsigned __int8 v18[144]; // [rsp+70h] [rbp-2A8h] BYREF
  unsigned __int8 v19[512]; // [rsp+100h] [rbp-218h] BYREF

  memset_0(v18, 0, 0x88uLL);
  v14 = 0LL;
  v12 = 0;
  v6 = (unsigned __int8 *)AllocCallbackMessage(0x88u, 1u, *((unsigned __int16 *)a1 + 1), v19, 1, 0x200uLL);
  RegionSize = (ULONG_PTR)v6;
  if ( !v6 )
    return 0LL;
  PtiCurrentShared();
  v15 = 0LL;
  v16 = 0LL;
  if ( v6 != v18 && v6 != v19 )
    PushW32ThreadLock(v6, &v15, Win32FreePool);
  *((_WORD *)v6 + 20) = *(_WORD *)a1;
  *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v6, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v6 + 6) < 0 )
    goto LABEL_18;
  *((_DWORD *)v6 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v6 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v6 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v6 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v6 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v6 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v6 + 16) = 0;
  }
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v11);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v7 = KeUserModeCallback(83LL, v6, *(unsigned int *)v6, &v14, &v12);
  EtwTraceEndCallback(83LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v11);
  if ( v7 >= 0 && v12 == 24 )
  {
    v8 = (__int64 *)v14;
    if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v9 = *v8;
    v17 = *v8;
  }
  else
  {
LABEL_18:
    LODWORD(v9) = 0;
  }
  if ( v6 != v18 && v6 != v19 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v15);
  }
  return (unsigned int)v9;
}
