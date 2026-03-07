struct _MDL *__fastcall VIDMM_PROCESS_HEAP::GetFullMDL(VIDMM_PROCESS_HEAP *this, _QWORD *a2)
{
  struct _MDL *result; // rax

  result = (struct _MDL *)a2[12];
  if ( result )
    return *(struct _MDL **)&result->Size;
  return result;
}
