/*
 * XREFs of AuthzBasepCompareOctetStringOperands @ 0x14066D030
 * Callers:
 *     AuthzBasepValueInSet @ 0x14036559C (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x140366314 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

__int64 __fastcall AuthzBasepCompareOctetStringOperands(unsigned __int8 a1, __int64 a2)
{
  int v2; // esi
  void **p_Buf1; // r8
  __int64 v4; // rdx
  __int64 v5; // r10
  int v6; // r9d
  __int64 v7; // rax
  size_t v8; // r8
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  void *Buf1; // [rsp+20h] [rbp-28h] BYREF
  size_t Size; // [rsp+28h] [rbp-20h]
  void *Buf2; // [rsp+30h] [rbp-18h]
  unsigned int v17; // [rsp+38h] [rbp-10h]

  v2 = a1;
  p_Buf1 = &Buf1;
  v4 = a2 + 32;
  v5 = 2LL;
  do
  {
    if ( *(_DWORD *)(v4 - 20) == 1 )
    {
      v6 = *(_DWORD *)(v4 - 8);
      v7 = v4;
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v4 - 16) + 48LL);
      v6 = *(_DWORD *)(v7 + 8);
    }
    v4 += 40LL;
    *p_Buf1 = *(void **)v7;
    *((_DWORD *)p_Buf1 + 2) = v6;
    p_Buf1 += 2;
    --v5;
  }
  while ( v5 );
  v8 = v17;
  v9 = Size;
  if ( (unsigned int)Size < v17 )
    v8 = (unsigned int)Size;
  v10 = memcmp(Buf1, Buf2, v8);
  v11 = 0;
  v12 = v10;
  if ( !v10 )
  {
    if ( v9 <= v17 )
    {
      if ( v9 < v17 )
        v12 = -1;
    }
    else
    {
      v12 = 1;
    }
  }
  switch ( v2 )
  {
    case 128:
      LOBYTE(v11) = v12 == 0;
      return v11;
    case 129:
      LOBYTE(v11) = v12 != 0;
      return v11;
    case 130:
LABEL_20:
      v12 >>= 31;
      return v12;
    case 131:
      LOBYTE(v11) = (int)v12 <= 0;
      return v11;
    case 132:
      LOBYTE(v11) = (int)v12 > 0;
      return v11;
    case 133:
      v12 = ~v12;
      goto LABEL_20;
  }
  return v12;
}
