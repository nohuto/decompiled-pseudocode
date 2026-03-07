__int64 __fastcall VWPLAddBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  __int64 v4; // rbx
  struct tagWND *v5; // rsi
  __int64 v6; // rbp
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  struct tagWND **v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned int v17; // r9d
  unsigned __int64 v18; // rdx

  v4 = a4;
  v5 = a3;
  v6 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gFullLog,
      4,
      11,
      15,
      (__int64)&WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids,
      (char)*a1,
      (char)v5);
  }
  v8 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v8[3] )
    {
      v9 = *v8;
      v10 = 0;
      if ( (_DWORD)v9 )
      {
        v11 = (struct tagWND **)(v8 + 6);
        while ( v5 != *v11 )
        {
          ++v10;
          v11 += 2;
          if ( v10 >= (unsigned int)v9 )
            goto LABEL_13;
        }
        return 0LL;
      }
LABEL_13:
      v12 = v8[1];
      if ( (unsigned int)v9 < (unsigned int)v12 )
      {
LABEL_14:
        v13 = 2 * v9;
        *(_QWORD *)&v8[2 * v13 + 6] = v5;
        *(_QWORD *)&v8[2 * v13 + 4] = v6;
        ++*v8;
        return 1LL;
      }
      v16 = 16 * v12;
      if ( v16 <= 0xFFFFFFFF )
      {
        v17 = v16 + 16;
        if ( (unsigned int)v16 < 0xFFFFFFF0 )
        {
          v18 = 16LL * v8[2];
          if ( v18 <= 0xFFFFFFFF && v17 + (unsigned int)v18 >= v17 )
          {
            v8 = (unsigned int *)UserReAllocPool(*a1, v17, v17 + (unsigned int)v18, 1819702101LL);
            if ( v8 )
            {
              v8[1] += v8[2];
              goto LABEL_19;
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = 16 * v4;
    if ( (unsigned __int64)(16 * v4) <= 0xFFFFFFFF && v15 < 0xFFFFFFF0 )
    {
      v8 = (unsigned int *)Win32AllocPoolZInit(v15 + 16, 1819702101LL);
      if ( v8 )
      {
        *v8 = 0;
        v8[3] = 0;
        v8[1] = v4;
        v8[2] = v4;
LABEL_19:
        *a1 = (struct tagVWPL *)v8;
        v9 = *v8;
        goto LABEL_14;
      }
    }
  }
  return 0LL;
}
