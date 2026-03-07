__int64 __fastcall KiSelectIdealProcessorSetsForProcess(int a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int16 v8; // bx
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a2 >> 20;
  v11 = 0LL;
  v10[0] = 0LL;
  v8 = 0;
  if ( v4 < 2 )
    v4 = 2;
  HIDWORD(v11) = (HIDWORD(v11) & 0xFFFFF | 0x80100000) - 1;
  if ( KiActiveGroups )
  {
    do
    {
      v12 = 0LL;
      KiSelectIdealProcessorSetForProcessGroup(a1, v8, v4, (unsigned int)&v12, (__int64)v10);
      *(_QWORD *)(a3 + 8LL * v8 + 8) = v12;
      KiConstrainIdealProcessorSetBreakpoints(&v11, v10);
      ++v8;
    }
    while ( v8 < (unsigned __int16)KiActiveGroups );
  }
  result = v11;
  *a4 = v11;
  return result;
}
