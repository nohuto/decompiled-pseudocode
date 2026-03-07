struct _MDL *__fastcall VidMmGetMDLForRange(struct _VIDMM_GLOBAL_ALLOC *a1, __int64 a2, __int64 a3)
{
  struct _MDL *result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx

  if ( (*((_DWORD *)a1 + 18) & 0xA000) != 0 )
    return (struct _MDL *)*((_QWORD *)a1 + 69);
  v5 = (_QWORD *)*((_QWORD *)a1 + 11);
  v6 = v5[3];
  if ( v6 )
    return (struct _MDL *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v5[1] + 24LL)
                                                                                       + 96LL))(
                            *(_QWORD *)(v5[1] + 24LL),
                            v6,
                            a2,
                            a3);
  result = (struct _MDL *)v5[11];
  if ( result )
    return *(struct _MDL **)&result->Size;
  return result;
}
