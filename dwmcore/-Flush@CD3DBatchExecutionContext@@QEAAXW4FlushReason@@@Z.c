__int64 __fastcall CD3DBatchExecutionContext::Flush(__int64 a1, int a2)
{
  __int64 result; // rax
  CD3DDynamicAppendBuffer *v4; // rdi
  char v5; // al

  *(_DWORD *)(a1 + 40) |= a2;
  result = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(result + 40) )
  {
    v4 = (CD3DDynamicAppendBuffer *)(result + 64);
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(result + 16));
    v5 = *(_BYTE *)(a1 + 82);
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(*(_QWORD *)(a1 + 32) + 112LL));
        CD3DDynamicAppendBuffer::EndAppend(v4);
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(a1 + 16)
                                                                                           + 160LL))(
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 100),
                   *(unsigned int *)(a1 + 104),
                   *(unsigned int *)(a1 + 88),
                   0,
                   *(_DWORD *)(a1 + 92));
      }
      else
      {
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 96),
                   *(unsigned int *)(a1 + 84));
      }
    }
    else
    {
      CD3DDynamicAppendBuffer::EndAppend(v4);
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
                 *(_QWORD *)(a1 + 16),
                 *(unsigned int *)(a1 + 100),
                 *(unsigned int *)(a1 + 88),
                 0LL);
    }
    ++*(_DWORD *)(a1 + 124);
    *(_DWORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
