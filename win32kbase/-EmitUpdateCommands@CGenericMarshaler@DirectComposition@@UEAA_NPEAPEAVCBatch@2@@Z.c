/*
 * XREFs of ?EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026F300
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12e75180a11ffed6cad26bb14cc56b49___ @ 0x1C026F084 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_12e75180a11ffed6cad26bb14cc56b4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd14___ @ 0x1C026F104 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cac5da16f0742029578aa2516c8918d___ @ 0x1C026F18C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8cac5da16f0742029578aa2516c8918.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cd6f464a9ec2345488c4c067fc53b36f___ @ 0x1C026F200 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_cd6f464a9ec2345488c4c067fc53b36.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___ @ 0x1C026F278 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f.c)
 */

char __fastcall DirectComposition::CGenericMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 *v2; // rbx
  __int64 *v5; // r14
  __int64 v6; // rdi
  char v7; // dl
  _DWORD *v8; // rax
  char updated; // al
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 7);
  v5 = &v2[*((_QWORD *)this + 8)];
  while ( v2 != v5 )
  {
    v6 = *v2;
    if ( !*(_BYTE *)(*v2 + 5) )
      goto LABEL_24;
    v7 = *(_BYTE *)(v6 + 4);
    if ( !v7 )
    {
      v14 = (_DWORD *)*v2;
      updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12e75180a11ffed6cad26bb14cc56b49___(
                  (__int64)this,
                  a2,
                  &v14);
      goto LABEL_22;
    }
    switch ( *(_BYTE *)(v6 + 4) )
    {
      case 1:
        v12 = 0LL;
        if ( v7 == 1 )
          v12 = (_DWORD *)*v2;
        v14 = v12;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cac5da16f0742029578aa2516c8918d___(
                    (__int64)this,
                    a2,
                    (__int64)&v14);
LABEL_22:
        if ( !updated )
          return 0;
        break;
      case 2:
        v11 = 0LL;
        if ( v7 == 2 )
          v11 = (_DWORD *)*v2;
        v14 = v11;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cd6f464a9ec2345488c4c067fc53b36f___(
                    (__int64)this,
                    a2,
                    &v14);
        goto LABEL_22;
      case 3:
        v10 = 0LL;
        if ( v7 == 3 )
          v10 = (_DWORD *)*v2;
        v14 = v10;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___(
                    (__int64)this,
                    a2,
                    &v14);
        goto LABEL_22;
      case 4:
        v8 = 0LL;
        if ( v7 == 4 )
          v8 = (_DWORD *)*v2;
        v14 = v8;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd14___(
                    (__int64)this,
                    a2,
                    &v14);
        goto LABEL_22;
    }
    *(_BYTE *)(v6 + 5) = 0;
LABEL_24:
    ++v2;
  }
  return 1;
}
