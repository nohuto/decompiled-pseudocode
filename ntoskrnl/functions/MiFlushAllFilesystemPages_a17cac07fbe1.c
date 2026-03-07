__int64 MiFlushAllFilesystemPages()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // r8
  int v2; // r9d
  int v3; // edi
  unsigned int i; // ebx

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = MiIsWorkingSetTrimThread();
    if ( !(_DWORD)result )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( (char *)v1 != (char *)MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( v1 != MiMappedPageWriter )
        {
          if ( v2 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_140C67AC8);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(MiSystemPartition);
          }
          _InterlockedAdd(&dword_140C6B3FC, 1u);
          result = qword_140C6F580;
          if ( qword_140C6F580 != qword_140C6F660 )
          {
            v3 = dword_140C6B394;
LABEL_10:
            for ( i = 0; i < 0xFF; ++i )
            {
              KeSetEvent(&stru_140C6B400, 0, 0);
              CcForEachPartition(
                (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
                2LL,
                0,
                0);
              result = qword_140C6F580;
              if ( qword_140C6F580 == qword_140C6F660 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C6B394;
              if ( v3 != dword_140C6B394 )
              {
                v3 = dword_140C6B394;
                goto LABEL_10;
              }
            }
          }
          _InterlockedDecrement(&dword_140C6B3FC);
        }
      }
    }
  }
  return result;
}
