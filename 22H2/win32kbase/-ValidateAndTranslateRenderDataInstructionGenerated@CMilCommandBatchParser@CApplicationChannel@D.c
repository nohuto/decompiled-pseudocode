/*
 * XREFs of ?ValidateAndTranslateRenderDataInstructionGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C0222EE0
 * Callers:
 *     ?ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C020CBB4 (-ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1C020C90C (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
        DirectComposition::CApplicationChannel **this,
        int *a2,
        int a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  int *v11; // rdx
  bool v12; // zf
  int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  bool v18; // zf
  unsigned int v19; // [rsp+48h] [rbp+18h] BYREF

  v3 = *a2;
  result = 0LL;
  v19 = 0;
  if ( v3 > 0x1C0 )
  {
    v14 = v3 - 449;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v12 = a3 == 40;
        goto LABEL_16;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( a3 == 12 )
        {
          v11 = a2 + 1;
          v13 = 196;
          goto LABEL_19;
        }
        return 3221225485LL;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 && a3 == 12 )
        {
          v11 = a2 + 1;
          v13 = 186;
          goto LABEL_19;
        }
        return 3221225485LL;
      }
      v18 = a3 == 8;
    }
    else
    {
      v18 = a3 == 40;
    }
    if ( v18 )
      return result;
    return 3221225485LL;
  }
  if ( v3 == 448 )
  {
    if ( a3 == 28 )
    {
      v11 = a2 + 1;
      v13 = 95;
      goto LABEL_19;
    }
  }
  else
  {
    v7 = v3 - 443;
    if ( !v7 )
    {
      v12 = a3 == 16;
      goto LABEL_16;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 && a3 == 16 )
          {
            DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
              this,
              a2 + 1,
              68,
              1,
              &v19);
            v11 = a2 + 2;
LABEL_18:
            v13 = 85;
            goto LABEL_19;
          }
          return 3221225485LL;
        }
        v12 = a3 == 28;
LABEL_16:
        if ( v12 )
        {
          v11 = a2 + 1;
          goto LABEL_18;
        }
        return 3221225485LL;
      }
      if ( a3 == 32 )
      {
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 1,
          67,
          1,
          &v19);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 2,
          25,
          1,
          &v19);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 3,
          25,
          1,
          &v19);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 4,
          62,
          1,
          &v19);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 5,
          62,
          1,
          &v19);
        v11 = a2 + 6;
        v13 = 62;
LABEL_19:
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          v11,
          v13,
          1,
          &v19);
        return v19;
      }
    }
    else if ( a3 == 16 )
    {
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        95,
        1,
        &v19);
      v11 = a2 + 2;
      v13 = 67;
      goto LABEL_19;
    }
  }
  return 3221225485LL;
}
