void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D70500, xmmword_140D70508, *(&xmmword_140D70508 + 1));
}
