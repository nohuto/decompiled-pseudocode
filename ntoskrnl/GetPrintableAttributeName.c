/*
 * XREFs of GetPrintableAttributeName @ 0x1409D0F74
 * Callers:
 *     LocalpGetStringForCondition @ 0x1409D3684 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     EncodeAttributeName @ 0x1409D019C (EncodeAttributeName.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  void *v8; // rbp
  size_t v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // r15
  _WORD *v15; // rdi
  const wchar_t *v16; // rdx
  size_t v17; // r8
  const void *v18; // rdx
  void *v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]

  LODWORD(v21) = 0;
  v20 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( !a1 || !a4 || !a2 )
    return 87LL;
  *a5 = 1;
  if ( (unsigned int)(a2 - 1) < 4 || (v9 = *(unsigned int *)(a1 + 1), *a5 = 5, a2 - 5 < (unsigned int)v9) )
  {
    v6 = 1336;
  }
  else
  {
    if ( a3 == -8 )
    {
      v12 = v9 + 2;
      if ( (int)v9 + 2 >= (unsigned int)v9 )
      {
LABEL_23:
        v14 = v12;
        v15 = SddlpAlloc(v12);
        *a4 = v15;
        if ( !v15 )
        {
          v6 = 8;
          goto LABEL_39;
        }
        switch ( a3 )
        {
          case -5:
            v16 = L"@DEVICE.";
            break;
          case -7:
            v16 = L"@USER.";
            break;
          case -6:
            v16 = L"@RESOURCE.";
            break;
          case -4:
            v16 = L"@TOKEN.";
            break;
          default:
LABEL_34:
            if ( a3 == -8 )
            {
              v17 = v9;
              v18 = (const void *)(a1 + (unsigned int)*a5);
            }
            else
            {
              v17 = (unsigned int)v21;
              v18 = v8;
            }
            memmove(&v15[v7], v18, v17);
            *a5 += v9;
            v15[(v14 >> 1) - 1] = 0;
            goto LABEL_39;
        }
        memmove(v15, v16, v7 * 2);
        goto LABEL_34;
      }
LABEL_38:
      v6 = 534;
      goto LABEL_39;
    }
    v10 = EncodeAttributeName((unsigned __int16 *)(a1 + 5), v9, (__int64 *)&v20);
    v8 = v20;
    v6 = v10;
    if ( !v10 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *((_WORD *)v20 + v11) );
      v21 = (unsigned int)(2 * v11);
      v12 = v21 + 2;
      if ( (int)v21 + 2 >= (unsigned int)v21 )
      {
        switch ( a3 )
        {
          case -5:
            v7 = 8;
            v13 = v21 + 18;
            break;
          case -7:
            v7 = 6;
            v13 = v21 + 14;
            break;
          case -6:
            v7 = 10;
            v13 = v21 + 22;
            break;
          case -4:
            v7 = 7;
            v13 = v21 + 16;
            break;
          default:
            goto LABEL_23;
        }
        if ( v13 >= v12 )
        {
          v12 = v13;
          goto LABEL_23;
        }
      }
      goto LABEL_38;
    }
  }
LABEL_39:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v6;
}
