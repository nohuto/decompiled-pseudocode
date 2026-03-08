/*
 * XREFs of __C_specific_handler @ 0x1403D2190
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x140411A40 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     KeCheckStackAndTargetAddress @ 0x1402DC470 (KeCheckStackAndTargetAddress.c)
 *     _NLG_Notify @ 0x1403D3740 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x1403D3770 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned int *v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int i; // r9d
  __int64 v19; // rax
  unsigned int v20; // edx
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF

  KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
  v8 = *((_QWORD *)DispatcherContext + 1);
  v9 = *(_QWORD *)DispatcherContext - v8;
  v10 = (unsigned int *)*((_QWORD *)DispatcherContext + 7);
  v11 = *((_DWORD *)DispatcherContext + 18);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v16 = *((_QWORD *)DispatcherContext + 4) - v8;
    while ( 1 )
    {
      v20 = *v10;
      if ( v11 >= *v10 )
        break;
      v17 = 2LL * v11;
      if ( v9 >= v10[4 * v11 + 1] && v9 < v10[4 * v11 + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v20; ++i )
          {
            if ( v16 >= v10[4 * i + 1]
              && v16 < v10[4 * i + 2]
              && v10[4 * i + 4] == v10[4 * v11 + 4]
              && v10[4 * i + 3] == v10[4 * v11 + 3] )
            {
              break;
            }
          }
          if ( i != v20 )
            return 1;
        }
        v19 = v10[4 * v11 + 4];
        if ( (_DWORD)v19 )
        {
          if ( v16 == v19 )
            return 1;
        }
        else
        {
          *((_DWORD *)DispatcherContext + 18) = v11 + 1;
          LOBYTE(v17) = 1;
          ((void (__fastcall *)(__int64, void *))(v8 + v10[4 * v11 + 3]))(v17, EstablisherFrame);
        }
      }
      ++v11;
    }
  }
  else
  {
    v21[0] = ExceptionRecord;
    v21[1] = ContextRecord;
    while ( v11 < *v10 )
    {
      if ( v9 >= v10[4 * v11 + 1] && v9 < v10[4 * v11 + 2] )
      {
        v12 = v10[4 * v11 + 4];
        if ( v12 )
        {
          v13 = v10[4 * v11 + 3];
          if ( (_DWORD)v13 == 1 )
            goto LABEL_10;
          v14 = ((__int64 (__fastcall *)(_QWORD *, void *))(v8 + v13))(v21, EstablisherFrame);
          v12 = v10[4 * v11 + 4];
          if ( v14 < 0 )
            return 0;
          if ( v14 > 0 )
          {
LABEL_10:
            NLG_Notify(v8 + v12, EstablisherFrame, 1LL);
            RtlUnwindEx(
              (ULONG_PTR)EstablisherFrame,
              v8 + v10[4 * v11 + 4],
              ExceptionRecord,
              ExceptionRecord->ExceptionCode,
              *((unsigned int **)DispatcherContext + 5),
              *((_QWORD *)DispatcherContext + 8));
            _NLG_Return2();
          }
        }
      }
      ++v11;
    }
  }
  return 1;
}
