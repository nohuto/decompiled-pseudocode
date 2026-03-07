__int64 __fastcall KiSendFreeze(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+32h] [rbp-26h]
  __int16 v11; // [rsp+36h] [rbp-22h]
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = (unsigned int)_InterlockedIncrement(&KiFreezeNestingLevel);
  if ( (int)result > 1 )
    return result;
  v8[1] = *(unsigned __int16 **)(a1 + 8);
  v5 = 0;
  v9 = 0;
  v8[0] = (unsigned __int16 *)a1;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v12, v8);
    if ( (_DWORD)result )
      break;
    v6 = KiProcessorBlock[v12];
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 11656), 5, 0);
    if ( a2 )
    {
      if ( v7 )
      {
        do
        {
          do
            _mm_pause();
          while ( *(_DWORD *)(v6 + 11656) );
        }
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 11656), 5, 0) );
      }
LABEL_6:
      ++v5;
    }
    else
    {
      if ( !v7 )
        goto LABEL_6;
      KeRemoveProcessorAffinityEx((unsigned __int16 *)a1, v12);
    }
  }
  if ( v5 )
    return HalSendNMI(a1);
  return result;
}
