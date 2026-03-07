unsigned __int8 *__fastcall xxxClientPSMTextOut(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int a3,
        char **a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int8 *result; // rax
  HDC v11; // r14
  __int64 v12; // rcx
  unsigned __int8 *v13; // rdi
  unsigned int v14; // ebx
  int v15; // r12d
  _BYTE v16[4]; // [rsp+60h] [rbp-2D8h] BYREF
  int v17; // [rsp+64h] [rbp-2D4h] BYREF
  __int64 v18; // [rsp+68h] [rbp-2D0h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2C8h] BYREF
  _QWORD v20[3]; // [rsp+78h] [rbp-2C0h] BYREF
  __int128 v21; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-298h]
  unsigned __int8 v23[80]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int8 v24[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  memset_0(v23, 0, sizeof(v23));
  v20[0] = 0LL;
  v17 = 0;
  v18 = 0LL;
  result = (unsigned __int8 *)CreateCompatiblePublicDC((HDC)a1);
  v11 = (HDC)result;
  v20[2] = result;
  if ( result )
  {
    result = AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v24, 1, 0x200uLL);
    v13 = result;
    v20[1] = result;
    if ( result )
    {
      PtiCurrentShared(v12);
      v21 = 0LL;
      v22 = 0LL;
      if ( v13 != v23 && v13 != v24 )
        PushW32ThreadLock((__int64)v13, &v21, (__int64)Win32FreePool);
      *((_QWORD *)v13 + 7) = v11;
      *((_DWORD *)v13 + 16) = a2;
      *((_DWORD *)v13 + 17) = a3;
      *((_DWORD *)v13 + 18) = a5;
      *((_DWORD *)v13 + 19) = a6;
      *((_WORD *)v13 + 20) = *(_WORD *)a4;
      *((_WORD *)v13 + 21) = *((_WORD *)a4 + 1);
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v13,
                  a4[1],
                  (unsigned int)*(unsigned __int16 *)a4 + 2,
                  (void **)v13 + 6) >= 0 )
      {
        v14 = GreSaveDCInternal(a1, 1);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v16);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v13 + 2) = 0LL;
        v15 = KeUserModeCallback(78LL, v13, *(unsigned int *)v13, v20, &v17);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v16);
        GreRestoreDC(a1, v14);
        if ( v11 != (HDC)a1 && v15 >= 0 )
          NtGdiBitBltInternal(
            (HDC)a1,
            0,
            0,
            *(_DWORD *)(gpDispInfo + 88LL),
            *(_DWORD *)(gpDispInfo + 92LL),
            (__int64)v11,
            0,
            0,
            13369376,
            0,
            0);
      }
      if ( v11 != (HDC)a1 )
      {
        GreDeleteDC(v11);
        GreDeleteObject(v18);
      }
      result = v23;
      if ( v13 != v23 )
      {
        result = v24;
        if ( v13 != v24 )
        {
          if ( *((_QWORD *)v13 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
          }
          return (unsigned __int8 *)PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
        }
      }
    }
    else if ( v11 != (HDC)a1 )
    {
      GreDeleteDC(v11);
      return (unsigned __int8 *)GreDeleteObject(v18);
    }
  }
  return result;
}
