void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140C37628 )
    qword_140C37628();
  else
    ExFreePoolWithTag(a1, 0);
}
