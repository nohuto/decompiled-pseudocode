/*
 * XREFs of RtlpHpLfhOwnerMoveSubsegment @ 0x14030AA84
 * Callers:
 *     RtlpHpLfhBucketGetSubsegment @ 0x140309A44 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14030A880 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x14030AA0C (RtlpHpLfhSlotAddSubsegment.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpHpLfhOwnerMoveSubsegment(__int64 a1, __int64 *a2, int a3)
{
  char v3; // bl
  __int64 v5; // r11
  _QWORD *v6; // r9
  __int64 **v7; // rcx
  _QWORD *v8; // r8
  __int64 **v9; // rax
  __int64 *v11; // r11
  __int64 **v12; // rax
  __int64 *v13; // rax

  v3 = a3;
  if ( *((_BYTE *)a2 + 38) )
  {
    if ( *((_BYTE *)a2 + 38) == 1 )
    {
      v5 = a1 + 40;
    }
    else
    {
      if ( *((_BYTE *)a2 + 38) != 2 )
        return a2;
      v5 = 0LL;
    }
    v6 = 0LL;
  }
  else
  {
    v5 = a1 + 24;
    v6 = (_QWORD *)(a1 + 8);
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = (__int64 **)(a1 + 40);
    }
    else
    {
      if ( a3 != 2 )
        return a2;
      v7 = 0LL;
    }
    v8 = 0LL;
  }
  else
  {
    v7 = (__int64 **)(a1 + 24);
    v8 = (_QWORD *)(a1 + 8);
  }
  if ( v5 )
  {
    v11 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 )
      goto LABEL_31;
    v12 = (__int64 **)a2[1];
    if ( *v12 != a2 )
      goto LABEL_31;
    *v12 = v11;
    v11[1] = (__int64)v12;
    if ( v6 )
      --*v6;
  }
  *((_BYTE *)a2 + 38) = v3;
  if ( v7 )
  {
    v9 = (__int64 **)v7[1];
    if ( *v9 != (__int64 *)v7 )
      goto LABEL_31;
    *a2 = (__int64)v7;
    a2[1] = (__int64)v9;
    *v9 = a2;
    v7[1] = a2;
    if ( v8 )
      ++*v8;
    a2 = 0LL;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 && *(_QWORD *)(a1 + 8) > 8uLL )
  {
    a2 = *v7;
    if ( (__int64 **)(*v7)[1] == v7 )
    {
      v13 = (__int64 *)*a2;
      if ( *(__int64 **)(*a2 + 8) == a2 )
      {
        *v7 = v13;
        v13[1] = (__int64)v7;
        --*v8;
        *((_BYTE *)a2 + 38) = 2;
        goto LABEL_15;
      }
    }
LABEL_31:
    __fastfail(3u);
  }
LABEL_15:
  if ( a2 && *((_BYTE *)a2 + 38) == 2 )
    a2[2] = 0LL;
  return a2;
}
