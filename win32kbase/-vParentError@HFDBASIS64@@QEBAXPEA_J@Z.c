void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v2; // r8
  signed __int64 v4; // r10
  __int128 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 3);
  *(_QWORD *)&v5 = 4 * v2;
  v4 = abs64(4 * v2);
  *((_QWORD *)&v5 + 1) = 8LL * *((_QWORD *)this + 2);
  if ( *((_QWORD *)&v5 + 1) - 4 * v2 >= 0 )
    v6 = *((_QWORD *)&v5 + 1) - 4 * v2;
  else
    v6 = v5 - *((_QWORD *)&v5 + 1);
  if ( v4 <= v6 )
  {
    if ( *((_QWORD *)&v5 + 1) - 4 * v2 >= 0 )
    {
      v7 = *((_QWORD *)&v5 + 1) - 4 * v2;
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 4 * v2;
    *(_QWORD *)&v5 = *((_QWORD *)&v5 + 1) ^ v5;
  }
  v7 = v5 - *((_QWORD *)&v5 + 1);
LABEL_9:
  *a2 = v7;
}
