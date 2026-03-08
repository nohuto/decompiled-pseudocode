/*
 * XREFs of _lambda_08fab9d56937b2df5c8c3c8f32b86a45_::operator() @ 0x1C02502DC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_08fab9d56937b2df5c8c3c8f32b86a45___ @ 0x1C02501C4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_08fab9d56937b2df5c8c3c8f32b86a4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_08fab9d56937b2df5c8c3c8f32b86a45_::operator()(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r8
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD **)a1;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 160LL);
  if ( v4 )
    v3 = *(_DWORD *)(v4 + 32);
  a2[2] = v3;
  a2[3] = v2[42];
  a2[4] = v2[43];
  result = (unsigned int)v2[44];
  a2[5] = result;
  return result;
}
