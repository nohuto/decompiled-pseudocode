CInputSinkStruct *__fastcall CInputSinkStruct::CInputSinkStruct(CInputSinkStruct *this)
{
  __int64 v1; // rdi
  int v3; // eax
  CInputSinkStruct *v4; // rdx

  v1 = 4LL;
  `vector constructor iterator'(
    (char *)this,
    16LL,
    4LL,
    (void (__fastcall *)(char *))CInputSinkStruct::InputQueueInfo::InputQueueInfo);
  v3 = 1;
  *((_BYTE *)this + 104) = 0;
  v4 = this;
  do
  {
    *(_DWORD *)v4 = v3++;
    v4 = (CInputSinkStruct *)((char *)v4 + 16);
    --v1;
  }
  while ( v1 );
  return this;
}
